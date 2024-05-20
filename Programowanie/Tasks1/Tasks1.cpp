#include <iostream>
using namespace std;


	class licz
	{
	private:
		float number;
	public:
		float Dodaj(int secondNumber)
		{
			return number + secondNumber;
		}
		float odejmij(int secondNumber)
		{
			return number - secondNumber;
		}
		licz() {
			number = 16;
		}
		licz(int thirdNumber) {
			number = thirdNumber;
		}
		
	};
	
	class Sumator
	{
	private:
		static const int SIZE_OF_ARRAY = 3;
		int number[SIZE_OF_ARRAY];
	public:
		Sumator()
		{
			for (int i = 0; i < SIZE_OF_ARRAY; i++)
			{
				number[i] = 0;
			}
		}
		Sumator(int numberGenerate)
		{
			srand(NULL);
			for (int i = 0; i < SIZE_OF_ARRAY; i++)
			{
				number[i] = rand() % numberGenerate + 1;
			}
		}
		int  Suma()
		{
			int sum = 0;
			for (int i = 0; i < SIZE_OF_ARRAY; i++)
			{
				sum += number[i];
			}
			return sum;
		}
		int SumaPodziel3()
		{
			int sum = 0;
			for (int i = 0; i < SIZE_OF_ARRAY; i++)
			{
				if (sum % 3 == 0)
					sum += number[i];
			}
			return sum;
		}
		void ShowNumbers()
		{
			for (int i = 0; i < SIZE_OF_ARRAY; i++)
			{
				std::cout << number[i] << "\n";
			}
		}
		void ShowNumbers(int lowIndex, int highIndex)
		{
			std::cout << "\n";
			for (int i = lowIndex; i <= highIndex; i++)
			{
				std::cout << number[i] << "\n";
			}
		}
	};

	class Osoba
	{
	private: string name;
		   string lastname;
		   int age;
	public:
		Osoba()
		{
			name = "monika";
			lastname = "Kowal";
			age = 25;
		};
		void wypisz()
		{
			cout << "imie: " << name << "  Nazwisko: " << lastname << "  wiek: " << age << "\n";
		}
		
	};


	class Ksiazka
	{
	private: string title;
		   string	date;
		   Osoba author;
	public:

			   
	};


		int main()
		{
			cout << "Zadanie 1" << "\n" << "\n" << "\n";

			licz operations(10);


			cout << "dodawanie wynosi: " << operations.Dodaj(64) << "\n";
			cout << "odejmowanie wynosi: " << operations.odejmij(7) << "\n";


			cout << "\n";


			licz operations2;

			cout << "dodawanie wynosi: " << operations2.Dodaj(65) << "\n";
			cout << "odejmowanie wynosi: " << operations2.odejmij(8) << "\n";

			cout << "Zadanie 2" << "\n" << "\n" << "\n";
			
			Sumator secondOperations;
			std::cout << secondOperations.Suma() << "\n";
			std::cout << secondOperations.SumaPodziel3() << "\n";
			secondOperations.ShowNumbers();
			std::cout << "\n";
			Sumator secondOperations2(20);
			secondOperations2.Suma();
			secondOperations2.SumaPodziel3();
			secondOperations2.ShowNumbers();


			cout << "Zadanie 3" << "\n" << "\n" << "\n";


			Osoba thirdOperations;
			thirdOperations.wypisz();

		}
