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
		int number[3];
	public:
		
		Sumator(){
		number[0] = 0;
		number[1] = 0;
		number[2] = 0;
		};
		Sumator(int secondNumber) {
			number[0] = rand() % secondNumber + 1;
			number[1] = rand() % secondNumber + 1;
			number[2] = rand() % secondNumber + 1;
		};
		int Suma(int sum)
		{
			sum = number[0] + number[1] + number[2];
		};
		int SumaPodziel3()
		{
			if (number[0] % 3 == 0 )
			{
				return number[0];
			}
			if (number[1] % 3 == 0)
			{
				return number[1];
			}
			if (number[2] % 3 == 0)
			{
				return number[2];
			}
			

			
			cout << number[0] + number[1] + number[2];
		};
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


		

	}