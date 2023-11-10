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
//Program obliczaj¹cy n!.
void task4()
{
	int numberFromUser;
	double silnia = 1;

	cout << "podaj liczbe do obliczenia silni: ";
	cin >> numberFromUser;

	for (int i = 1; i <= numberFromUser; i++)
	{
		silnia *= i;
	}

	cout << "silnia wynosi: " << silnia;
}
// Program wyœwietlaj¹cy na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4! itd.)
void task5()
{
	double silnia = 1;

	for (int i = 1; i <= 10; i++)
	{
	 silnia *= i;
	cout << silnia << "\n";
	}

}
// Program wyœwietlaj¹cy na ekranie tabliczkê mno¿enia od 1 do 9 (np. 1x1=1, 1x2=2, 1x3=3 itd.).
void task6()
{
	for (int i = 1; i <= 9; ++i) {
		for (int j = 1; j <= 9; ++j) {
			cout << i << "x" << j << "=" << i * j << "\t";
		}
		cout << endl;
	}

}
// Program wyœwietlaj¹cy na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100

void task7()
{
	cout << "Liczby podzielne przez 3 od 1 do 100:" << endl;

	for (int i = 1; i <= 100; ++i) {
		if (i % 3 == 0) {
			cout << i << " ";
		}
	}
}
//* Program obliczaj¹cy sumê kwadratów liczb od 1 do 10

void task8()
{
	int suma = 0;

	for (int i = 1; i <= 10; ++i) {
		suma += i * i; 
	}

	cout << "Suma kwadratów liczb od 1 do 10 wynosi: " << suma << endl;
}
//Program wyœwietlaj¹cy na ekranie ci¹g Fibonacciego do 20 elementu(ci¹g Fibonacciego to ci¹g gdzie ka¿dy element jest sum¹ dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
void task9()
{
	int pierwszy = 0, drugi = 1, nastepny;
	
	cout << "Ci¹g Fibonacciego do 20. elementu:" << endl;

	cout << pierwszy << " " << drugi << " "; // Wyœwietlamy pierwsze dwa elementy

	for (int i = 3; i <= 20; ++i) {
		nastepny = pierwszy + drugi;
		cout << nastepny << " ";
		pierwszy = drugi;
		drugi = nastepny;
	}

}
void task10()
{

	int numberOfLines = 5;

	//pierwsza
	for (int lineNumber = 0; lineNumber < numberOfLines; lineNumber++)
	{
		for (int numberOfStar = 0; numberOfStar < numberOfLines - lineNumber; numberOfStar++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	for (int lineNumber = 0; lineNumber < numberOfLines; lineNumber++)
	{
		for (int numberOfStar = 0; numberOfStar <= lineNumber; numberOfStar++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	//druga
	for (int lineNumber = 0; lineNumber < numberOfLines; lineNumber++)
	{
		for (int number = lineNumber + 5; number > lineNumber; number--)
		{
			cout << number;
		}
		cout << "\n";
	}

	//trzecia
	for (int lineNumber = 0; lineNumber < numberOfLines; lineNumber++)
	{
		for (int number = 0; number < 6; number++)
		{
			cout << (number + lineNumber) % 2 + 1;
		}
		cout << "\n";
	}

	//czwarta
	for (int lineNumber = 0; lineNumber < numberOfLines; lineNumber++)
	{
		for (int number = lineNumber + 1; number <= lineNumber + 3; number++)
		{
			for (int i = 0; i < number; i++)
				cout << number;
		}
		cout << "\n";
	}
}
	
void task11()
{
	int n;
	cout << "Podaj wartoœæ n: ";
	cin >> n;

	double sum = 0.0;
	for (int i = 1; i <= n; ++i) {
		sum += 1.0 / (i * i);
	}

	double piApproximation = sqrt(6 * sum);
	cout << "Przybli¿enie liczby pi: " << piApproximation << endl;
	cout << "Wartoœæ liczby pi z Math.PI: " << M_PI << endl;
}
void task12()
{
	int liczba;


	cout << "Podaj liczbe: ";
	cin >> liczba;


	int suma = 0;


	while (liczba != 0) {
		suma += liczba % 10;
		liczba /= 10;       

	// Wyœwietlenie wyniku
	cout << "Suma cyfr podanej liczby: " << suma << endl;

}

int main()
{
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
	//task9();
	//task10();
	//task11();
}
