using LinqTasksConsoleApp;

var tasks = new List<TaskItem>
{
    new TaskItem(1, "Buy groceries", true),
    new TaskItem(2, "Clean the house", false),
    new TaskItem(3, "Pay bills", true),
    new TaskItem(4, "Study LINQ", false),
    new TaskItem(5, "Exercise", true)
};

/*
var tasks = new List<TaskItem>();
tasks.Add(new TaskItem(1, "Buy groceries", true));
tasks.Add(new TaskItem(2, "Clean the house", false));
//itd.
*/






//Zadanie 7: Zadania pogrupowane według stanu zakończenia, a następnie posortowane w grupach według nazwy

//Zadanie 8: Najkrótsza nazwa zadania niezakończonego

//Zadanie 9: Ilość liter w nazwach wszystkich zakończonych zadań




//Zadanie 10: Lista zadań z indeksami (zakończone zadania z numeracją)



// Zadanie 1: Wyszukaj wszystkie zakończone zadania

Console.WriteLine("\nzadanie pierwsze ej\n");
var completedTasks = tasks.Where(t => t.IsCompleted == true).ToList();
foreach(var task in completedTasks)
{
    Console.WriteLine(task);

}

// Zadanie 2: Znajdź pierwsze zadanie, które nie jest zakończone

Console.WriteLine("\nzadanie drugie ej\n");

var unCompletedTasks = tasks.First(p => p.IsCompleted == false);
Console.WriteLine(unCompletedTasks);

// Zadanie 3: Posortuj zadania według nazwy

Console.WriteLine("\nzadanie trzecie ej\n");

var sortedTasks = tasks.OrderBy(p => p.Name);
foreach(var task in sortedTasks)
{
    Console.WriteLine(task);
}

// Zadanie 4: Policz zadania zakończone

Console.WriteLine("\nzadanie czwarte ej\n");

var completedCountedTasks = tasks.Count(p => p.IsCompleted == true);
Console.WriteLine(completedCountedTasks);

// Zadanie 5: Wybierz tylko nazwy zadań i wyświetl

Console.WriteLine("\nzadanie piate ej\n");

var onlyNames = tasks.Select(p => p.Name);
foreach (var task in onlyNames)
{
    Console.WriteLine(task);
}

// Zadanie 6: Znalezienie nazw zakończonych zadań posortowanych według długości nazwy
/*
 * select *
 * from task
 * 
 * 
 */
Console.WriteLine("\nzadanie szoste ej\n");
var sortedNamesOfTasks =  tasks.Where(p => p.IsCompleted == true);
var lOfSortedByNames = sortedNamesOfTasks.OrderBy(p => p.Name);