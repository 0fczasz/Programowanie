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

/*
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
//6. Program sprawdzający czy podana data jest poprawna (np. sprawdzając, czy dzień jest z zakresu od 1 do 31, miesiąc od 1 do 12 itd.)
void task6(){
    int day, month;

    cout << "Podaj dzień \n";
    cin >> day;
    cout << "Podaj miesiąc \n";
    cin >> month;
    if (day > 0 && day < 32 && month > 0 && month < 13) {
        cout << "Poprawna data";
    }
    else {

        cout << "Nie poprawna data";
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
}