StreamReader streamReader = new StreamReader("przyklad.txt");

string strNumberFromFile;
List<string> strNumbers = new List<string>();

while ((strNumberFromFile = streamReader.ReadLine()) != null)
{
    strNumbers.Add(strNumberFromFile);
}

streamReader.Close();

Console.WriteLine("Zdanie 4.1:");

var reverseDovidedBy17 = strNumbers
    .Where(s => int.Parse(string.Join("", s.Reverse())) % 17 == 0)
    .Select(s => string.Join("", s.Reverse()));

foreach (var strNumber in reverseDovidedBy17)
    Console.WriteLine(strNumber);


Console.WriteLine("Zdanie 4.2:");

string strMaxNumber = "";
int maxDiff = int.MinValue;
foreach (var strNumber in strNumbers)
{
    int dif = Math.Abs(int.Parse(strNumber) - int.Parse(string.Join("", strNumber.Reverse())));
    if (dif > maxDiff)
    {
        maxDiff = dif;
        strMaxNumber = strNumber;
    }
}

Console.WriteLine($"{strMaxNumber} {maxDiff}");

strMaxNumber = strNumbers.OrderBy(s => Math.Abs(int.Parse(s) - int.Parse(string.Join("", s.Reverse())))).Last();
maxDiff = Math.Abs(int.Parse(strMaxNumber) - int.Parse(string.Join("", strMaxNumber.Reverse())));

Console.WriteLine($"{strMaxNumber} {maxDiff}");

Console.WriteLine(" 4.3 ");

bool primeNumber(int number)
{
    if (number < 2) return false;
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0) return false;
    }
    return true;
}
var reverse = strNumbers.Where(s => { int number = int.Parse(s); int reversedNumber = int.Parse(string.Join("", s.Reverse())); return primeNumber(number) && primeNumber(reversedNumber); });

foreach (var strNumber in reverse)
{
    Console.WriteLine(strNumber);
}


Console.WriteLine(" 4.4 ");

var group = strNumbers.GroupBy(s => s).ToList();

int  different = group.Count();
int twoX = group.Count(g => g.Count() == 2);
int threeX = group.Count(g => g.Count() == 3);


Console.WriteLine($" {different} {twoX} {threeX}");