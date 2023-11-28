#include <iostream>
using namespace std;
/*Napisz program, który bêdzie prosi³ o has³o.Nie przepuœci dalej dopóki nie zostanie ono podane prawid³owo.
* Napisz program, który pobiera od u¿ytkownika ci¹g znaków i wyœwietla liczbê samog³osek i spó³g³osek w tym ci¹gu.
* Poproœ u¿ytkownika o wprowadzenie liczby ca³kowitej w systemie dziesiêtnym.Nastêpnie skonwertuj tê liczbê na system dwójkowy(binarny) i wyœwietl wynik.
* Program sprawdzaj¹cy czy podany ci¹g znaków jest palindromem(czyli takim, który czytany od ty³u jest taki sam, jak czytany od przodu, np. "kajak")
* Program sprawdzaj¹cy czy podane dwa s³owa s¹ anagramami(czyli takimi, które zawieraj¹ te same litery, ale w innym uk³adzie, np. "klasa" i "salka")
*

* Program wyci¹gaj¹cy informacje z numeru PESEL
* Program implementuj¹cy algorytm szyfrowania Cezara(proste szyfrowanie, w którym ka¿dy znak w tekœcie jest zastêpowany innym znakiem, przesuniêtym o sta³¹ liczbê pozycji w alfabecie). */


void task1()
{
	char signFromUser;
		//signFromUser = 'a'
	cout << "Podaj znak \n";
	cin >> signFromUser;

	cout << "Podales znak: " << signFromUser << "\n";
		//if (signFromUser >= '97' && signFromUser <= '122')
	if (signFromUser >= 'a' && signFromUser <= 'z')
	{
		cout << "Znak jest mala litera alfabetu";
	}
	else
	{
		cout << "Znak nie jest mala litera alfabetu";
	}
	
	signFromUser = signFromUser + 2;
	cout << "Podales znak" << signFromUser;

	signFromUser = signFromUser + 'a';
	cout << "Podales znak" << signFromUser;
}
//Napisz program, który bêdzie prosi³ o has³o.Nie przepuœci dalej dopóki nie zostanie ono podane prawid³owo
void task2()
{
	string password;
	string enterPassword;

	cout << "Stworz haslo \n";
	cin >> password;
	cout << "haslo zostalo stworzone, podaj haslo ponownie by sie zalogowac \n";
	
	do {
		cin >> enterPassword
			;
		if (password == enterPassword)
		{
			cout << "haslo zostalo podane poprawnie";
		}
		else
		{
			cout << "haslo jest nie poprawne " << "Podaj haslo ponownie ";
		}
	} while (password != enterPassword);

}
 //Napisz program, który pobiera od u¿ytkownika ci¹g znaków i wyœwietla liczbê samog³osek i spó³g³osek w tym ci¹gu.
void task3()
{

	string textFromUser;
	int vovel = 0;
	int consonant = 0;
	int marks = 0;


	cout << "Podaj tekst do sprawdznia";
	cin >> textFromUser;

	for (int i = 0; i < textFromUser.length(); i++)
	{
		if (textFromUser[i] == 'a' 
			|| textFromUser[i] == 'A'
			|| textFromUser[i] == 'e'
			|| textFromUser[i] == 'E'
			|| textFromUser[i] == 'i'
			|| textFromUser[i] == 'I'
			|| textFromUser[i] == 'o'
			|| textFromUser[i] == 'O'
			|| textFromUser[i] == 'u'
			|| textFromUser[i] == 'U'
			|| textFromUser[i] == 'y'
			|| textFromUser[i] == 'Y')
		{
			vovel++;
		}

		else if (textFromUser[i] == 'b' 
			|| textFromUser[i] == 'B'
			|| textFromUser[i] == 'c'
			|| textFromUser[i] == 'C'
			|| textFromUser[i] == 'd'
			|| textFromUser[i] == 'D'
			|| textFromUser[i] == 'f'
			|| textFromUser[i] == 'F'
			|| textFromUser[i] == 'g'
			|| textFromUser[i] == 'G'
			|| textFromUser[i] == 'h'
			|| textFromUser[i] == 'H'
			|| textFromUser[i] == 'j'
			|| textFromUser[i] == 'J'
			|| textFromUser[i] == 'k'
			|| textFromUser[i] == 'K'
			|| textFromUser[i] == 'l'
			|| textFromUser[i] == 'L'
			|| textFromUser[i] == 'm'
			|| textFromUser[i] == 'M'
			|| textFromUser[i] == 'n'
			|| textFromUser[i] == 'N'
			|| textFromUser[i] == 'p'
			|| textFromUser[i] == 'P'
			|| textFromUser[i] == 'r'
			|| textFromUser[i] == 'R'
			|| textFromUser[i] == 's'
			|| textFromUser[i] == 'S'
			|| textFromUser[i] == 't'
			|| textFromUser[i] == 'T'
			|| textFromUser[i] == 'w'
			|| textFromUser[i] == 'W'
			|| textFromUser[i] == 'z'
			|| textFromUser[i] == 'Z')
		{
			consonant++;
		}
		else
		{
			marks++;
		}

	}

	cout << "w tym tekscie jest: \n" << vovel << ": samog³osek\n" << consonant << ": spó³g³osek\n" << marks << ": znaków specjanych\n";
}

//* Poproœ u¿ytkownika o wprowadzenie liczby ca³kowitej w systemie dziesiêtnym.Nastêpnie skonwertuj tê liczbê na system dwójkowy(binarny) i wyœwietl wynik.
void task4()
{
	string numberFromUser;

	cout << "Podaj liczbe";
	cin >> numberFromUser;

	

}
int main()
{
	//task1();
	//task2();
	//task3();
}

