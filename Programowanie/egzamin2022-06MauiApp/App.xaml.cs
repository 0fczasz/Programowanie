namespace egzamin2022_06MauiApp
{
    public partial class App : Application
    {   
        public App()
        {
            InitializeComponent();
        }

        protected override Window CreateWindow(IActivationState? activationState)
        {
            Window window = new Window(new AppShell());
            window.Title = "Dodaj pracownika 01234567890";
            return window;
                
        }
    }
}