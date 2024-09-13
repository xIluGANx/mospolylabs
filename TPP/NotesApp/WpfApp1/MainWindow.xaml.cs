using System;
using System.IO;
using System.Linq;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Media;

namespace WpfApp1
{
    public partial class MainWindow : Window
    {
        private const string FilePath = "notes.txt";

        public MainWindow()
        {
            InitializeComponent();
            LoadNotes();
        }

        private void LoadNotes()
        {
            if (File.Exists(FilePath))
            {
                string content = File.ReadAllText(FilePath);
                textBox.Text = content.Replace(Environment.NewLine, "\n").Trim(); // Удаление пустых строк
            }
        }

        private void SaveNotes()
        {
            string content = textBox.Text;
            var lines = content.Split(new[] { "\n" }, StringSplitOptions.RemoveEmptyEntries);
            File.WriteAllText(FilePath, string.Join(Environment.NewLine, lines));
        }

        private void Window_Closing(object sender, System.ComponentModel.CancelEventArgs e)
        {
            SaveNotes();
        }

        private void ColorComboBox_SelectionChanged(object sender, System.Windows.Controls.SelectionChangedEventArgs e)
        {
            if (ColorComboBox.SelectedItem is ComboBoxItem selectedColor)
            {
                this.Background = (Brush)new BrushConverter().ConvertFromString(selectedColor.Tag.ToString());
            }
        }

        private void FontComboBox_SelectionChanged(object sender, System.Windows.Controls.SelectionChangedEventArgs e)
        {
            if (FontComboBox.SelectedItem is ComboBoxItem selectedFont)
            {
                textBox.FontFamily = new FontFamily(selectedFont.Tag.ToString());
            }
        }
    }
}