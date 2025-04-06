using static System.Math;
StreamReader streamReader = new StreamReader("skrot_przyklad.txt");
List<string> numbers = new List<string>();
string? linia = streamReader.ReadLine();
while (linia != null)
{
    numbers.Add(linia);
    linia = streamReader.ReadLine();
}

Console.WriteLine("Zadanie 3.2");

int? nieparzystySkrot(string number)
{
    string skrot = "";
    foreach (char num in number)
    {
        if (num % 2 == 1)
        {
            skrot = skrot + num;
        }
        
    }
    if (skrot == "")
        return null;
    else
        return int.Parse(skrot);
}

int najwiekszaLiczba = 0;
int ileLiczb = 0;
foreach (string number in numbers)
{

    if (nieparzystySkrot(number) == null)
    {
        int dobraLiczba = int.Parse(number);
        ileLiczb++;
        if (dobraLiczba > najwiekszaLiczba)
            najwiekszaLiczba = dobraLiczba;
    }
}

Console.WriteLine(ileLiczb);
Console.WriteLine(najwiekszaLiczba);


// 3.3
Console.WriteLine("Zadanie 3.3");

    StreamReader streamReader2 = new StreamReader("skrot2_przyklad.txt");
List<string> numbers2 = new List<string>();
string? linia2 = streamReader2.ReadLine();
while (linia2 != null)
{
    numbers2.Add(linia2);
    linia2 = streamReader2.ReadLine();
}


foreach (string number2 in numbers2){
    int? skrot = nieparzystySkrot(number2);
    if (skrot != null)
    {
        int wynikNWD = NWD(int.Parse(number2), (int) skrot);
        if (wynikNWD == 7)
        {
            Console.WriteLine(number2);
        }
    }
}


int NWD(int a, int b)
{
  
    while (a % b != 0)
    {
        int mod = a % b;
        a = b;
        b = mod;
    }
    return b;
}






//List<int> results = File.ReadAllLines("skrot_przyklad.txt")
//    .Where(line => line.All(character => character % 2 == 0))
//    .Select(line => int.Parse(line))
//    .ToList();


//Console.WriteLine(results.Count);
//Console.WriteLine(results.Max());