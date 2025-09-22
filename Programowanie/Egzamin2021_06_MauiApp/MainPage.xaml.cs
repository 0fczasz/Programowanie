using System.Globalization;
using System.Runtime.CompilerServices;

namespace Egzamin2021_06_MauiApp
{
    public partial class MainPage : ContentPage
    {
        public string Email { get; set; }
        public string Haslo1 { get; set; }
        public string Haslo2 { get; set; }

        public MainPage()
        {
            InitializeComponent();
        }

        private string wynik;

        public string Wynik
        {
            get { return wynik; }
            set { wynik = value; OnPropertyChanged(); }

        }
        private void Button_Clicked(object sender, EventArgs e)
        {
            if (SprawdzEmail(Email) && SprawdzHaslo(Haslo1, Haslo2))
            {
                Wynik = $"Witaj {Email}";
            }
            else if(!SprawdzHaslo(Haslo1, Haslo2))
            {
                Wynik = "Hasła się różnią";
            }
            else if(!SprawdzEmail(Email))
            {
                Wynik = "Nieprawidłowy adres e-mail";
            }


        }
        bool SprawdzEmail(string email)
        {
            foreach (var sign in Email)
            {
                if (sign == '@')
                {
                    return true;
                }
              
            }
            return false;
        }
        bool SprawdzHaslo(string haslo1, string haslo2)
        {
            if(haslo1 == haslo2)
            { return true; }
            else
            {
                return false;
            }
        }

    }
}
