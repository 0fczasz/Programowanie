namespace egzamin2022_06MauiApp
{
    public partial class MainPage : ContentPage
    {
        public MainPage()
        {
            InitializeComponent();
        }
        public int likes = 0;

        public int Likes
        { 
            get { return likes; }
            set { likes = value; OnPropertyChanged(); }
        }
            

        private void Button_Like(object sender, EventArgs e)
        {
            Likes++;
            
        }

        private void Button_Delete(object sender, EventArgs e)
        {
            if (Likes != 0)
            {
                Likes--;
            }
        }
            
    }
}
