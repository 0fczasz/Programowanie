﻿using LinqTasksConsoleApp;
using System.Net.Http.Headers;

var tasks = new List<TaskItem>
{
    new TaskItem(1, "Buy groceries", true),
    new TaskItem(2, "Clean the house", false),
    new TaskItem(3, "Pay bills", true),
    new TaskItem(4, "Study LINQ", false),
    new TaskItem(5, "Exercise", true)
};


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
var sortedNamesOfTasks =  tasks.Where(p => p.IsCompleted == true).OrderBy(p => p.Name.Length).Select(p => p.Name);
foreach(var name in sortedNamesOfTasks)
    { Console.WriteLine(name); }


//Zadanie 7: Zadania pogrupowane według stanu zakończenia, a następnie posortowane w grupach według nazwy
Console.WriteLine("\nzadanie siodme ej\n");
var sortedEndingSortedname = tasks.OrderBy(p => p.IsCompleted == true).ThenBy(p => p.Name);
foreach (var task in sortedEndingSortedname)
{
    Console.WriteLine(task);
}

//Zadanie 8: Najkrótsza nazwa zadania niezakończonego
Console.WriteLine("\nzadanie osme ej\n");
var unendedSmalestName = tasks.Where(p => p.IsCompleted == false).OrderBy(p => p.Name.Length).Select(p  => p.Name).FirstOrDefault();
Console.WriteLine(unendedSmalestName);


//Zadanie 9: Ilość liter w nazwach wszystkich zakończonych zadań
Console.WriteLine("\nzadanie dziewiate ej\n");
var letterAmountOfEndedTasks = tasks.Where(p => p.IsCompleted == true).Select(p => p.Name.Length).Sum();
    Console.WriteLine(letterAmountOfEndedTasks);
//Zadanie 10: Lista zadań z indeksami (zakończone zadania z numeracją)

Console.WriteLine("\nzadanie dziesiate ej\n");
var listOfTasksWithIndex = tasks.Where(p => p.IsCompleted == true).Select((t, index) => new { Index = index + 1, Task = t });
foreach(var task in listOfTasksWithIndex)
    { Console.WriteLine(task.Index);
    Console.WriteLine(task.Task);
}

//Zadanie 11: Zadania z najdłuższą nazwą w każdej grupie zakończonych i niezakończonych
Console.WriteLine("\nzadanie jedenaste ej\n");
var endTasksWithStrongestName = tasks.Where(p => p.IsCompleted == true).OrderByDescending( p => p.Name.Length).Select( p => p.Name).FirstOrDefault();
var notEndTasksWithStrongestName = tasks.Where(p => !p.IsCompleted).OrderByDescending(p => p.Name.Length).Select(p => p.Name).FirstOrDefault(); ;
Console.WriteLine(endTasksWithStrongestName);
Console.WriteLine(notEndTasksWithStrongestName);


//Zadanie 12: Zlicz, ile zadań w każdej grupie zawiera słowo „the” w nazwie

Console.WriteLine("\nzadanie dwunaste ej\n");

var countTheInTasks = tasks.GroupBy(p => p.IsCompleted).Select(g =>
new { GroupValue = g.Key, Count = g.Where(t => t.Name.Contains("the")).Count() });
foreach (var count in countTheInTasks)
{
    Console.WriteLine(count);
}


//Zadanie 13: Utwórz listę zakończonych zadań z ich numeracją oraz długością nazw

Console.WriteLine("\nzadanie trzynaste ej\n");
var listOfEndedTasksWithNumbers = tasks.Where(p => p.IsCompleted).Select((p, index) =>
new { IndexNumber = index + 1, Write = p.Name, Numbername = p.Name.Length });

foreach (var task in listOfEndedTasksWithNumbers)
{
    Console.WriteLine(task.IndexNumber);
    Console.WriteLine(task.Write);
    Console.WriteLine(task.Numbername);
}




//Zadanie 14: Zadania posortowane według stanu zakończenia, a następnie alfabetycznie według nazw
Console.WriteLine("\nzadanie czternaste ej\n");

