using System;
using System.Windows;
using System.Windows.Controls;

namespace CalculatorAppV2
{
    public partial class MainWindow : Window
    {
        List<string> list = new List<string>();
        string listAsString;
        public MainWindow()
        {
            InitializeComponent();
        }

        private void Button_Click_1(object sender, RoutedEventArgs e)
        {
            Button b = (Button)sender;
            if (tb.Text.Contains("=") ^ tb.Text.Contains("Error"))
            {
                tb.Text = "";
                tb.Text += b.Content.ToString();
            }
            else { tb.Text += b.Content.ToString(); }
        }

        private void Result_click(object sender, RoutedEventArgs e)
        {
            try
            {
                result();
                if (check.IsChecked == true)
                {
                    listAsString = string.Join(System.Environment.NewLine, list.ToArray());
                    log.Text = listAsString;
                }
            }
            catch (Exception exc)
            {
                tb.Text = "Error!";
            }
        }

        private void result()
        {
            String op;
            string res;
            int iOp = 0;
            if (tb.Text.Contains("+"))
            {
                iOp = tb.Text.IndexOf("+");
            }
            else if (tb.Text.Contains("-"))
            {
                iOp = tb.Text.IndexOf("-");
            }
            else if (tb.Text.Contains("*"))
            {
                iOp = tb.Text.IndexOf("*");
            }
            else if (tb.Text.Contains("/"))
            {
                iOp = tb.Text.IndexOf("/");
            }
            else
            {
                //error    
            }

            op = tb.Text.Substring(iOp, 1);
            double op1 = Convert.ToDouble(tb.Text.Substring(0, iOp));
            double op2 = Convert.ToDouble(tb.Text.Substring(iOp + 1, tb.Text.Length - iOp - 1));

            if (op == "+")
            {
                tb.Text += "=" + (op1 + op2);
                res = op1 + "+" + op2 + "=" + (op1 + op2);
                if (check.IsChecked == true)
                {
                    list.Add(res);
                }

            }
            else if (op == "-")
            {
                tb.Text += "=" + (op1 - op2);
                res = op1 + "-" + op2 + "=" + (op1 - op2);
                if (check.IsChecked == true)
                {
                    list.Add(res);
                }
            }
            else if (op == "*")
            {
                tb.Text += "=" + (op1 * op2);
                res = op1 + "*" + op2 + "=" + (op1 * op2);
                if (check.IsChecked == true)
                {
                    list.Add(res);
                }
            }
            else
            {
                tb.Text += "=" + (op1 / op2);
                res = op1 + "*" + op2 + "=" + (op1 * op2);
                if (check.IsChecked == true)
                {
                    list.Add(res);
                }
            }
        }

        private void Off_Click_1(object sender, RoutedEventArgs e)
        {
            Application.Current.Shutdown();
        }

        private void Del_Click(object sender, RoutedEventArgs e)
        {
            tb.Text = "";
        }

        private void R_Click(object sender, RoutedEventArgs e)
        {
            if (tb.Text.Length > 0)
            {
                if (tb.Text == "Error!")
                {
                    tb.Text = "";
                }
                else if (tb.Text.Contains("="))
                {
                    tb.Text = "";
                }
                else
                {
                    tb.Text = tb.Text.Substring(0, tb.Text.Length - 1);
                }
            }
        }
        private void full_delete_Click(object sender, RoutedEventArgs e)
        {
            if (list.Any())
            {
                list.Clear();
                log.Text = "";
            }
        }
        private void Ld_Click(object sender, RoutedEventArgs e)
        {
            if (list.Any())
            {
                list.RemoveAt(list.Count - 1);
                listAsString = string.Join(System.Environment.NewLine, list.ToArray());
                log.Text = listAsString;
            }
        }
        private void Check_on(object sender, RoutedEventArgs e) 
        { 
            logsUI.Visibility = Visibility.Visible;
        }

        private void Check_off(object sender, RoutedEventArgs e) 
        {
           logsUI.Visibility= Visibility.Collapsed;
        }
    }
}