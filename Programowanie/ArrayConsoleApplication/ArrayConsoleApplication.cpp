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
int main()
{
    //task1();
    task2();

}


