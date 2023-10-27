#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;
//for petla
//Program wyœwietlaj¹cy na ekranie kolejne liczby naturalne od 1 do 10
void task1()
{
	for (int i = 1; i < 11; i++)
	{
		cout << i << "\n";
	}
}

// Program obliczaj¹cy sumê liczb od 1 do 100
void task2()
{
	int suma = 0;
	for (int i = 1; i <= 100; i++)
	{
		suma += i;
	}
	cout << suma;
}

// Program wyœwietlaj¹cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
void task3()
{
	for (int i = 1; i < 11; i++)
	{
		cout << pow(i, 2) << "\n";
	}
	
}
int main()
{
	//task1();
	task3();
	//task2();
}
