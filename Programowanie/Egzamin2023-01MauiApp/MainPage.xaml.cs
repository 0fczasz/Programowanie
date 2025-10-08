using System;
using System.Globalization;
using System.Linq;
using System.Security.Cryptography.X509Certificates;
using System.Text;

namespace Egzamin2023_01MauiApp
{
    public partial class MainPage : ContentPage
    {

        public List<string> ListOfProffesion { get; set; } = new List<string>();
        public string Name { get; set; }
        public string LastName { get; set; }
        public string SelectedProffesion { get; set; }
        public int HowManyChar { get; set; }
        public bool IsCheckedLetters { get; set; }
        public bool IsCheckedNumbers { get; set; }
        public bool IsCheckedSpecial { get; set; }

        public static readonly string LowerLetters = "abcdefghijklmnopqrstuvwxyz";

        public static readonly string UpperLetters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

        public static readonly string Digits = "0123456789";

        public static readonly string SpecialChars = "!@#$%^&*()_+-=";
        private string passwordResult;



        public MainPage()
        {
            ListOfProffesion.Add("Kierownik");
            ListOfProffesion.Add("Starszy programista");
            ListOfProffesion.Add("Młodszy programista");
            ListOfProffesion.Add("Tester");
            InitializeComponent();
        }

        private void GeneratePass(object sender, EventArgs e)
        {
            StringBuilder characterPool = new StringBuilder();
            Random rng = new Random();
            StringBuilder password = new StringBuilder();

            if (IsCheckedLetters && HowManyChar > 0)
            {
                string letters = LowerLetters + UpperLetters;
                password.Append(letters[rng.Next(letters.Length)]);
                characterPool.Append(letters);
            }

            if (IsCheckedNumbers && HowManyChar > 0)
            {
                password.Append(Digits[rng.Next(Digits.Length)]);
                characterPool.Append(Digits);
            }

            if (IsCheckedSpecial && HowManyChar > 0)
            {
                password.Append(SpecialChars[rng.Next(SpecialChars.Length)]);
                characterPool.Append(SpecialChars);
            }
      
            if (HowManyChar > 0 && IsCheckedLetters || IsCheckedNumbers || IsCheckedSpecial)
            {
                while (password.Length < HowManyChar)
                {
                    password.Append(characterPool[rng.Next(characterPool.Length)]);
                }
                DisplayAlert("", $"{password}", "OK");
            }
            
            passwordResult = password.ToString();
        }


        private void Confirm(object sender, EventArgs e)
        {
            DisplayAlert("", $"Dane pracownika: {Name} {LastName} {SelectedProffesion} {passwordResult} ", "OK");
        }
    }
}
