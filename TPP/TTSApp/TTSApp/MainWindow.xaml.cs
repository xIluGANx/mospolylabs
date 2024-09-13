using System.IO;
using System.Speech.Synthesis;
using System.Windows;
using Microsoft.Win32;

namespace TTSApp
{
    public partial class MainWindow : Window
    {
        private SpeechSynthesizer synthesizer;

        public MainWindow()
        {
            InitializeComponent();
            synthesizer = new SpeechSynthesizer();
        }

        private void LoadFileButton_Click(object sender, RoutedEventArgs e)
        {
            OpenFileDialog openFileDialog = new OpenFileDialog
            {
                Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*"
            };

            if (openFileDialog.ShowDialog() == true)
            {
                string filePath = openFileDialog.FileName;
                InputTextBox.Text = File.ReadAllText(filePath);
            }
        }

        private void SynthesizeButton_Click(object sender, RoutedEventArgs e)
        {
            string textToRead = InputTextBox.Text;
            if (!string.IsNullOrWhiteSpace(textToRead))
            {
                synthesizer.SpeakAsync(textToRead);
            }
            else
            {
                MessageBox.Show("Введите текст или загрузите файл.");
            }
        }

        private void SaveAudioButton_Click(object sender, RoutedEventArgs e)
        {
            string textToRead = InputTextBox.Text;
            if (!string.IsNullOrWhiteSpace(textToRead))
            {
                SaveFileDialog saveFileDialog = new SaveFileDialog
                {
                    Filter = "WAV files (*.wav)|*.wav"
                };

                if (saveFileDialog.ShowDialog() == true)
                {
                    synthesizer.SetOutputToWaveFile(saveFileDialog.FileName);
                    synthesizer.Speak(textToRead);
                    synthesizer.SetOutputToDefaultAudioDevice();
                    MessageBox.Show("Аудио успешно сохранено.");
                }
            }
            else
            {
                MessageBox.Show("Введите текст или загрузите файл.");
            }
        }
    }
}