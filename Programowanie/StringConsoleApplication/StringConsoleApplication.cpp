#include <iostream>
using namespace std;
/*Napisz program, kt�ry b�dzie prosi� o has�o.Nie przepu�ci dalej dop�ki nie zostanie ono podane prawid�owo.
* Napisz program, kt�ry pobiera od u�ytkownika ci�g znak�w i wy�wietla liczb� samog�osek i sp�g�osek w tym ci�gu.
* Popro� u�ytkownika o wprowadzenie liczby ca�kowitej w systemie dziesi�tnym.Nast�pnie skonwertuj t� liczb� na system dw�jkowy(binarny) i wy�wietl wynik.
* Program sprawdzaj�cy czy podany ci�g znak�w jest palindromem(czyli takim, kt�ry czytany od ty�u jest taki sam, jak czytany od przodu, np. "kajak")
* Program sprawdzaj�cy czy podane dwa s�owa s� anagramami(czyli takimi, kt�re zawieraj� te same litery, ale w innym uk�adzie, np. "klasa" i "salka")
*

* Program wyci�gaj�cy informacje z numeru PESEL
* Program implementuj�cy algorytm szyfrowania Cezara(proste szyfrowanie, w kt�rym ka�dy znak w tek�cie jest zast�powany innym znakiem, przesuni�tym o sta�� liczb� pozycji w alfabecie). */


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
//Napisz program, kt�ry b�dzie prosi� o has�o.Nie przepu�ci dalej dop�ki nie zostanie ono podane prawid�owo
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
 //Napisz program, kt�ry pobiera od u�ytkownika ci�g znak�w i wy�wietla liczb� samog�osek i sp�g�osek w tym ci�gu.
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

	cout << "w tym tekscie jest: \n" << vovel << ": samog�osek\n" << consonant << ": sp�g�osek\n" << marks << ": znak�w specjanych\n";
}

//* Popro� u�ytkownika o wprowadzenie liczby ca�kowitej w systemie dziesi�tnym.Nast�pnie skonwertuj t� liczb� na system dw�jkowy(binarny) i wy�wietl wynik.
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

