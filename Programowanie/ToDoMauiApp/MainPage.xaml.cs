namespace ToDoMauiApp
{
    public partial class MainPage : ContentPage
    {
       public List<ToDoTask> TasksToDos{ get; set; } = new List<ToDoTask>();
        public MainPage()
        {
            TasksToDos.Add(new ToDoTask() { Title = "Jedzenie", IsCompleted = true});
            TasksToDos.Add(new ToDoTask() { Title = "Granie", IsCompleted = false});
            TasksToDos.Add(new ToDoTask() { Title = "Pranie", IsCompleted = false});
            TasksToDos.Add(new ToDoTask() { Title = "lanie", IsCompleted = true});
            InitializeComponent();
        
        }

    }
}
