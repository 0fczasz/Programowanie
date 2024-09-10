// See https://aka.ms/new-console-template for more information
Console.Write("Hello, World!");
Console.WriteLine("Hello, World!");
Console.Write("Hello, World!");
Console.WriteLine("Hello, World!");

string name = "Jan";
string surname = "Kowalski";
Console.WriteLine("Witaj " + name + " " + surname + " tutaj");
Console.WriteLine("Witaj {0} {1} tutaj", name, surname);
Console.WriteLine($"Witaj {name} {surname} tutaj");

Console.WriteLine("Prędkość to km\\h");
Console.WriteLine(@"Prędkość to km\h");

int number = 5;
int secondNumber = 6;

Console.WriteLine($"number = {number}");
Console.WriteLine($"secondNumber = {secondNumber}");

void ParametrtTest_v1(int p)
{
    p++;
    Console.WriteLine($"ParametrTest_v1: p = {p}");
}
void ParametrtTest_v2(ref int p)
{
    p++;
    Console.WriteLine($"ParametrTest_v1: p = {p}");
}
void ParametrtTest_v3(out int p)
{
    p++;
    Console.WriteLine($"ParametrTest_v1: p = {p}");
}

ParametrtTest_v1(number);
 Console.WriteLine($"number = {number}");

ParametrtTest_v2(ref number);
Console.WriteLine($"number = {number}");

int thirdNumber
ParametrtTest_v3(out thirdNumber);
Console.WriteLine($"number = {thirdNumber}");