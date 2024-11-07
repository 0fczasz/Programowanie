using ListConsoleapp;

List<Person> people = new List<Person>();

#region Uzupełnienie kolekcji

Person person = new Person();
person.Name = "Ewa";
person.Surname = "Kowalska";
person.Age = 32;

people.Add(person);

person = new Person();
person.Name = "Jan";
person.Surname = "Nowak";
person.Age = 12;

people.Add(person);

person = new Person();
person.Name = "Karol";
person.Surname = "Krawczyk";
person.Age = 52;

people.Add(person);

person = new Person();
person.Name = "Paweł";
person.Surname = "Nowakowski";
person.Age = 35;

people.Add(person);

#endregion


Console.WriteLine("Główna kolekcja:");
/*
for (int i = 0; i < people.Count; i++)
{
    Console.WriteLine($"Imię: {people[i].Name} Nazwisko: {people[i].Surname} Wiek: {people[i].Age}");
}
*/

foreach (Person p in people)
{
    Console.WriteLine($"Imię: {p.Name} Nazwisko: {p.Surname} Wiek: {p.Age}");
    //people.Remove(p);  //NIEPOPRAWNA OPERACJA
}


List<Person> sortedPeopleByAge = people.OrderBy(p => p.Age).ToList();
Console.WriteLine("Kolekcja posortowana po wieku:");
foreach (Person p in sortedPeopleByAge)
{
    Console.WriteLine($"Imię: {p.Name} Nazwisko: {p.Surname} Wiek: {p.Age}");
}

sortedPeopleByAge = people.OrderByDescending(p => p.Age).ToList();
Console.WriteLine("Kolekcja posortowana po wieku malejąco:");
foreach (Person p in sortedPeopleByAge)
{
    Console.WriteLine($"Imię: {p.Name} Nazwisko: {p.Surname} Wiek: {p.Age}");
}

Console.WriteLine();
int maxAge = people.Max(p => p.Age);
Console.WriteLine($"Najstarsza osoba ma {maxAge} lat.");
Console.WriteLine();

double avgAge = people.Average(p => p.Age);
Console.WriteLine($"Średnia wieku {avgAge} lat.");
Console.WriteLine();

if(people.Any(p => p.Age <18))
{
    Console.WriteLine("wszystkie osoby są pełnoletnie");
}

if(people.All(p => p.Age >= 18))
{
    Console.WriteLine("wszystkie osoby sa pelnoletnie");
}

Person firstPerson = people.FirstOrDefault(p => p.Name.Length == 3);

if(firstPerson.Surname.Equals(default(Person)) == false)
{
    Console.WriteLine("osoba z imieniem wiekszym niz 3 litery");
    Console.WriteLine($"{firstPerson.Name}");
}