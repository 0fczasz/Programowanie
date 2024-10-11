//ListCollectionConsoleApp

//C++:
//int intArray[10];

//C#:
//int[] intArray = new int[10];
//intArray[0] = 9;


List<int> intsCollection = new List<int>();
intsCollection.Add(15);
intsCollection.Add(18);


Console.WriteLine(intsCollection[0]);
Console.WriteLine(intsCollection[1]);


intsCollection.Add(5);

Console.WriteLine(intsCollection[0]);
Console.WriteLine(intsCollection[1]);   
Console.WriteLine(intsCollection[2]);

intsCollection.Remove(1);
Console.WriteLine(intsCollection[0]);
Console.WriteLine(intsCollection[1]);

intsCollection.Add(12);
intsCollection.Add(19);
intsCollection.Add(4);

Console.WriteLine("Elementy na kolekcji: ");
for ( int i = 0; i < intsCollection.Count; i++ )    
{
    Console.WriteLine(intsCollection[i]);
}


List<int>  intsGreat10Collection = new List<int>();
for ( int i = 0;i < intsCollection.Count; i++ )
{
    if (intsCollection[i] > 10)
        intsGreat10Collection.Add(intsCollection[i]);
}

Console.WriteLine("Elementy na kolekcji wikeszych niż 10: ");
for( int i = 0; i < intsGreat10Collection.Count;i++ )
{
    Console.WriteLine(intsGreat10Collection[i]);
}