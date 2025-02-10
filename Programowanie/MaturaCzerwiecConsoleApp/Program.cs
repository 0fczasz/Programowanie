StreamReader streamReader = new StreamReader("przyklad.txt");

string strNumberFromFile;
List<string> strNumbers = new List<string>();

while ((strNumberFromFile = streamReader.ReadLine()) != null)
{
    strNumbers.Add(strNumberFromFile);
}

streamReader.Close();

//Zadanie 4.1
var reverseDovidedBy17 = strNumbers
    .Where(s => int.Parse(string.Join("", s.Reverse())) % 17 == 0)
    .Select(s => string.Join("", s.Reverse()));

Console.WriteLine("Zdanie 4.1:");
foreach (var strNumber in reverseDovidedBy17)
    Console.WriteLine(strNumber);


Console.WriteLine("zadanie 4.2");

var strNumberWithMaxDiffrence = strNumbers.OrderBy(s => Math.Abs(int.Parse(s) - int.Parse(string.Join("", s.Reverse())))).LastOrDefault();

Console.Write(strNumberWithMaxDiffrence);
Console.Write(" ");
Console.WriteLine(Math.Abs(int.Parse(strNumberWithMaxDiffrence) - int.Parse(string.Join("", strNumberWithMaxDiffrence.Reverse()))));

Console.WriteLine("zadanie 4.3");