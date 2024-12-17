  int IleKostki;
    void IleRzucic()
{
    do
    {
        Console.WriteLine("Ile kostek chcesz rzucić? (3 - 10)");
        IleKostki = int.Parse(Console.ReadLine());
    } while (IleKostki < 3 || IleKostki > 10);
}

void OczkaKostki()
{
    IleRzucic();
    int sumaRandom = 0;
    Random random = new Random();
    for(int i = 1; i <= IleKostki; i++)
    {
        Console.WriteLine($"Kostka {i}: {random.Next(1,7)}" );
        sumaRandom += random.Next(1,7);
    }
    Console.WriteLine(sumaRandom);
}

string JeszczeRaz;

do
{
    Console.WriteLine("Jeszcze raz? (t/n)");
    JeszczeRaz = Console.ReadLine();
    OczkaKostki();
} while (JeszczeRaz == "t");
