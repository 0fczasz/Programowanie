using System.Globalization;

namespace Egzamin2023_01MauiApp
{
    public partial class MainPage : ContentPage
    {

        public List<string> ListOfProffesion { get; set; } = new List<string>();
         public string Name
        {
            get;  set;
        }
        public string LastName
        {
            get; set;
        }
        public string SelectedProffesion
        {
            get; set;
        }


        public MainPage()
        {
            ListOfProffesion.Add("Kierownik");
            ListOfProffesion.Add( "Starszy programista");
            ListOfProffesion.Add("Młodszy programista");
            ListOfProffesion.Add("Tester");
            InitializeComponent();
            
        }

        private void GeneratePass(object sender, EventArgs e)
        {

        }

        private void Confirm(object sender, EventArgs e)
        {
            DisplayAlert("", $"Dane pracownika: {Name} {LastName} {SelectedProffesion}", "OK");
        }
    }
}
