  int IleKostki;
    do
    {
        Console.WriteLine("Ile kostek chcesz rzucić? (3 - 10)");
        IleKostki = int.Parse(Console.ReadLine());
    } while (IleKostki < 3 || IleKostki > 10);



void OczkaKostki()
{

    Random random = new Random();
    for(int i = 1; i <= IleKostki; i++)
    {
        Console.WriteLine($"Kostka {i}: " );
    }
}

OczkaKostki();
