#include <iostream>
using namespace std;

void task1()
{
    const int SIZE_OF_ARRAY = 5;
    int numbers[SIZE_OF_ARRAY];

    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        cout << "Podaj liczbe\n";
        cin >> numbers[i];
    }
    for (int i = SIZE_OF_ARRAY - 1; i >= 0; i--)
    {
        cout << "Podana liczbaa" << numbers[i] << "\n";
    }
 
}
void task2()
{
    const int UPPER_RANGE = 100;
    const int LOWER_RANGE = 5;

    const int SIZE_OF_ARRAY = 5;
    int numbers[SIZE_OF_ARRAY];

    srand(time(NULL));

    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
    }

    for (int i = 0; i < SIZE_OF_ARRAY; i++)
        std::cout << numbers[i] << ", ";
    std::cout << "\n";
    
    //szukanie maksimum
    int max = numbers[0];
    for (int i = 1; i < SIZE_OF_ARRAY; i++)
        if (numbers[i] > max)
            max = numbers[i];
    //szukanie min
    int min = numbers[0];
    for (int i = 1; i < SIZE_OF_ARRAY; i++)
        if (numbers[i] < min)
            min = numbers[i];
    cout << "najwieksza to " << max << "\n";
    cout << "najmniejsza to " << min << "\n";
}
void task3()
{
    const int UPPER_RANGE = 100;
    const int LOWER_RANGE = 5;

    const int SIZE_OF_ARRAY = 5;
    int numbers[SIZE_OF_ARRAY];

    srand(time(NULL));

    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
    }

    for (int i = 0; i < SIZE_OF_ARRAY; i++)
        std::cout << numbers[i] << ", ";
    std::cout << "\n";

    int sum = 0;

    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        sum = sum + numbers[i];
    }
    double average = sum * 1.0 / SIZE_OF_ARRAY;
    cout << "Œrednia liczb to " << average << "\n";
}

void task4()
{
    const int UPPER_RANGE = 100;
    const int LOWER_RANGE = 5;

    const int SIZE_OF_ARRAY = 5;
    int numbers[SIZE_OF_ARRAY];

    srand(time(NULL));

    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
    }

    for (int i = 0; i < SIZE_OF_ARRAY; i++)
        std::cout << numbers[i] << ", ";
    std::cout << "\n";
    
    //wersja 1
    for (int numberFromRange = LOWER_RANGE; numberFromRange < UPPER_RANGE; numberFromRange++)
    {
        int numberOfOccurences = 0;
        for (int j = 0; j < SIZE_OF_ARRAY; j++)
        {
            if (numbers[j] == numberFromRange)
                numberOfOccurences++;
        }
        cout << "liczba " << numberFromRange << "wystapila " << numberOfOccurences << "razy\n";
    }
}
int main()
{
    //task1();
    //task2();
    //task3();
    task4();

}


