#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;

/*
Operatory porównania:
== - równości
!= - różności
>
<
>=
<=

*/




//Napisz funkcję, która podzieli dwie liczby.
void task1()
{
    int firstNumber, secondNumber;

    cout << "Podaj pierwszą liczbę:\n";
    cin >> firstNumber;
    cout << "Podaj drugą liczbę (byle nie zero):\n";
    cin >> secondNumber;

    if (secondNumber != 0)
    {
        double quotient = firstNumber / secondNumber;
        cout << "Wynik dzielenia: " << quotient << "\n";
    }
    else
    {
        cout << "Dzielenie przez zero!!!\n";
    }
}

// 2. Program sprawdzający czy podana liczba jest dodatnia, ujemna czy równa zero
void task2()
{
    double Number;
    cout << "Podaj liczbe \n";
    cin >> Number;
    if (Number > 0) {
        cout << "Twoja liczba jest dodatnia";
    }
    else if (Number < 0) {
        cout << "Twoja liczba jest ujemna";
    }
    else {
        cout << "Twoja liczba jest równa zero";
    }
}
 // 3. Program sprawdzający czy podany rok jest rokiem przestępnym
void task3() {
    int year;

    cout << "Podaj rok do sprawdzenia \n";
    cin >> year;
    if (year % 4 == 0 && year % 100 > 0 || year % 400 == 0) {
        cout << "Rok jest przestępny";
    }
    else {
        cout << "Rok jest nieprzystępny";
    }
}

 //4. Program wyświetlający odpowiedni komunikat w zależności od podanej oceny(np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
void task4() {
    int grade;

    cout << "Podaj ocene \n";
    cin >> grade;
    if (grade == 6) {
        cout << "celujący";
    }
    else if (grade == 5) {
        cout << "Bardzo dobry";

    }
    else if (grade == 4) {
        cout << "Dobry";
    }
    else if (grade == 3) {
        cout << "Dostateczny";
    }
    else if (grade == 2) {
        cout << "Dopuszczający";
    }
    else if (grade == 1) {
        cout << "Niedostateczny";
    }
    else {
        cout << "Nie ma takiej oceny";
    }
}
//5. Program sprawdzający czy podane hasło jest poprawne(np.jeśli hasło jest "abc123", program powinien wyświetlić "hasło poprawne", jeśli jest inne, powinien wyświetlić "hasło niepoprawne").
void task5() {
    string password;
    
    cout << "Podaj hasło \n";
    cin >> password;
    if (password == "abc123") {
        cout << "Poprawne hasło";
    }
    else {
        cout << "Nie poprawne hasło";
    }
}
//6. Program sprawdzający czy podana data jest poprawna(np.sprawdzając, czy dzień jest z zakresu od 1 do 31, miesiąc od 1 do 12 itd.)
void task6()
{
	int day;
	int month;
	int year;
	cout << "podaj dzień \n" << endl;
	cin >> day;
	cout << "Podaj miesiąc \n" << endl;
	cin >> month;
	cout << "Podaj rok \n" << endl;
	cin >> year;
    if (month >= 1 && month <= 12)
    {
        if (month == 2)
        {
            if (year % 4 == 0 && year % 100 > 0 || year % 400 == 0)
            {
                if (day < 30)
                {
                    cout << "data jest poprawna";
                }
                else
                {
                    cout << "data jest nie poprawna";
                }

            }
            else if (year % 4 != 0 && year % 100 > 1 || year % 400 != 0)
            {
                if (day < 29) {
                    cout << "data jest poprawna";
                }
                else
                {
                    cout << "data jest nie poprwana";
                }
            }

        }
        else if ((month == 4 || month == 6 || month == 9 || month == 11) && day >= 1 && day <= 30)
        {
            cout << "data jest poprawna" << endl;
        }
        else if (day >= 1 && day <= 31)
        {
            cout << "data jest nie poprawna" << endl;
        }
        else
        {
            cout << "data jest nie poprawna" << endl;
        }
    }
}
//7. Program wyświetlający odpowiedni komunikat w zależności od podanej temperatury (np. "ciepło" dla temperatury powyżej 20 stopni Celsjusza, "chłodno" dla temperatury poniżej 10 stopni Celsjusza itd.)
void task7()
{
    double temperature;

    cout << "Podaj temperature \n";
    cin >> temperature;
    if (temperature > 20) {
        cout << "Ciepło";
    }
    else if (temperature < 10) {
        cout << "Chłodno";
    }
}

// 8. Program sprawdzjacy czy podana liczba jest z przediału < 1; 15)
void task8()
{
    double Number;

    cout << "Podaj liczbe \n";
    cin >> Number;
    if (Number >= 1 && Number < 15)
    {
        cout << "Podana liczba jest z przedziału <1, 15)";
    }
    else
    {
        cout << "Podana liczba nie jest z tego przedziału";
    }

}

//9. Program sprawdzający czy osoba jest pełnoletnia.
void task9()
{
    double years;
    
    cout << "Podaj wiek osoby \n";
    cin >> years;
    if (years > 18)
    {
        cout << "Osoba nie jest pełnoletnia";
    }
    else
    {
        cout << "Osoba jest pełnoletnia";
    }
}   
/*
10. Program, który sprawdzi czy z podanych długości boków można zrobić trójkąt.
*/
void task10()
{
    double triangleSide1;
    double triangleSide2;
    double triangleSide3;
    
    cout << "Podaj pierwszy bok trójkąta \n";
    cin >> triangleSide1;
    cout << "Podaj pierwszy bok trójkąta \n";
    cin >> triangleSide2;
    cout << "Podaj pierwszy bok trójkąta \n";
    cin >> triangleSide3;

    if ((triangleSide1 + triangleSide2) > triangleSide3 && (triangleSide1 + triangleSide3) > triangleSide2 && (triangleSide2 + triangleSide3) > triangleSide1)
    {
        cout << "Z podanych długości boków można zrobić trójkąt";
    }
    else
    {
        cout << "Z podanych długości boków nie można zrobić trójkąt";
    }
}
//11. Napisz program, który będzie działać jako prosty kalkulator matematyczny, umożliwiając użytkownikowi wybór operacji(dodawanie, odejmowanie, mnożenie, dzielenie) i wprowadzanie liczb do obliczeń.
void task11()
{
    int operation;
    double FirstNumber, SecondNumber;

    cout << "Podaj operacje do wykonania: 1. dodawanie, 2. odejmowanie, 3. mnożenie, 4.dzielenie \n";
    cin >> operation;

    if (operation == 1)
    {
        cout << "Dodawnie liczb wynosi: " << (FirstNumber + SecondNumber);
    }
    else if (operation == 2)
    {
        cout << "Odejmowanie liczb wynosi: " << (FirstNumber + SecondNumber);
    }
    else if (operation == 3)
    {
        cout << "Mnożenie liczb wynosi: " << (FirstNumber + SecondNumber);
    }
    else if (operation == 4)
    {
        cout << "Dzielenie liczb wynosi: " << (FirstNumber + SecondNumber);
    }
}
// 12. Napisz program, który wczyta numer miesiąca i wyświetli jego słowny odpowiednik.
void task12()
{
    int month;

    cout << "Podaj number miesiąca \n";
    cin >> month;
    switch (month)
    {
    case 1:
        cout << "Styczeń";
        break;
    case 2:
        cout << "Luty";
            break;
    case 3:
        cout << "Marzec";
            break;
    case 4:
        cout << "Kwiecień";
            break;
    case 5:
        cout << "Maj";
            break;
    case 6:
        cout << "Czerwiec";
            break;
    case 7:
        cout << "Lipiec";
            break;
    case 8:
        cout << "Sierpień";
            break;  
    case 9:
        cout << "Wrzesień";
        break;
     case 10:
        cout << "Październik";
        break;
     case 11:
        cout << "Listopad";
        break;
     case 12:
        cout << "Grudzień";
        break;
     default: 
         cout << "Nie ma takiego miesiąca.";

    }
}
/*13. Napisz program, który na podstawie współczynników równania kwadratowego(a, b, c) sprawdzi, czy to równanie ma rozwiązania rzeczywiste, i jeśli tak, to je obliczy.*/
void task13()
{
    double a, b, c;

    cout << "Podaj a \n";
    cin >> a;

    cout << "Podaj b \n";
    cin >> b;

    cout << "Podaj c \n";
    cin >> c;

    if (a != 0)
    {
        double delta = pow(b, 2) - 4 + (a + c);

        if (delta > 0)
        {
            double mz2 = (-b - sqrt(delta)) / 2 * a;
            double mz1 = (-b + sqrt(delta)) / 2 * a;
            cout << "Są 2 miejsca zerowe" << mz1 << "i " << mz2;
        }
        else if (delta == 0)
        {
            
            double mz3 = (-b / 2 * a);
            cout << "Miejsce zerowe wynosi: " << mz3;
            
        }
        else if (delta < 0)
        {
            cout << "Równanie kwadratowe nie posiada rozwiązań";
        }
 
    }
    else
    {
        cout << "To nie jest równanie kwadratowe";
    }
}
int main()
{
    setlocale(LC_CTYPE, "polish");

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
    //task12();
    //task13();
}


