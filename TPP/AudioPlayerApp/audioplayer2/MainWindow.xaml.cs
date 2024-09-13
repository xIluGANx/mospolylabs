using Microsoft.Win32;
using System;
using System.Collections.Generic;
using System.IO;
using System.Windows;
using System.Windows.Media;


namespace audioplayer2
{
    public partial class MainWindow : Window
    {
        private MediaPlayer mediaPlayer;
        private List<string> playlist;

        public MainWindow()
        {
            InitializeComponent();
            mediaPlayer = new MediaPlayer();
            playlist = new List<string>();
        }

        private void btnLoad_Click(object sender, RoutedEventArgs e)
        {
            OpenFileDialog openFileDialog = new OpenFileDialog
            {
                Title = "Выберите аудиофайлы",
                Filter = "Audio Files|*.mp3;*.wav;*.wma",
                Multiselect = true
            };

            if (openFileDialog.ShowDialog() == true)
            {
                foreach (string file in openFileDialog.FileNames)
                {
                    playlist.Add(file);
                    lbPlaylist.Items.Add(Path.GetFileName(file));
                }
            }
        }

        private void btnPlay_Click(object sender, RoutedEventArgs e)
        {
            if (lbPlaylist.SelectedIndex != -1)
            {
                mediaPlayer.Open(new Uri(playlist[lbPlaylist.SelectedIndex]));
                mediaPlayer.Play();
            }
        }

        private void btnStop_Click(object sender, RoutedEventArgs e)
        {
            mediaPlayer.Stop();
        }

        private void btnSavePlaylist_Click(object sender, RoutedEventArgs e)
        {
            SaveFileDialog saveFileDialog = new SaveFileDialog
            {
                Filter = "Playlist Files|*.playlist"
            };

            if (saveFileDialog.ShowDialog() == true)
            {
                File.WriteAllLines(saveFileDialog.FileName, playlist);
            }
        }

        private void btnOpenPlaylist_Click(object sender, RoutedEventArgs e)
        {
            OpenFileDialog openFileDialog = new OpenFileDialog
            {
                Filter = "Playlist Files|*.playlist"
            };

            if (openFileDialog.ShowDialog() == true)
            {
                playlist.Clear();
                lbPlaylist.Items.Clear();

                string[] files = File.ReadAllLines(openFileDialog.FileName);
                foreach (string file in files)
                {
                    playlist.Add(file);
                    lbPlaylist.Items.Add(Path.GetFileName(file));
                }
            }
        }
    }
}