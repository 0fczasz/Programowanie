#define _USE_MATH_DEFINES
#include <iostream>

using namespace std;
//srednia arytmetyczna z dwoch liczb//
void task1()
{
	double number;
	double secondNumber;

	cout << "Podaj pierwsza liczbe" << endl;
	cin >> number;
	cout << "Podaj druga liczbe"<< endl;
	cin >> secondNumber;
	cout << "Srednia dwoch liczb: " << (number + secondNumber) / 2;

}
//2. Program obliczaj¹cy pole prostok¹ta.
void task2()
{
	double number;
	double secondNumber;

	cout << "Podaj pierwszy bok prostokata" << endl;
	cin >> number;
	cout << "Podaj drugi bok prostokata" << endl;
	cin >> secondNumber;
	cout << "Pole prostokata wynosi: " << number * secondNumber;
}
//3. Program obliczaj¹cy objêtoœæ sto¿ka.
void task3() {
	double height;
	double radious;

	cout << "Podaj wysokoœæ sto¿ka\n";
	cin >> height;
	cout << "Podaj promieñ sto¿ka \n";
	cin >> radious;
	cout << "Objêtoœæ sto¿ka: " << (1.0 / 3) * M_PI * (radious * radious) * height;


}
//4. Program obliczaj¹cy pole ko³a.
void task4()
{
	double radious;
	cout << "Podaj promieñ ko³a \n";
	cin >> radious;
	cout << "Pole ko³a wynosi: " << M_PI * (radious * radious);
}
//5. Program obliczaj¹cy wartoœæ wyra¿enia a^2 + b^2
void task5()
{
	double numberA;
	double numberB; 

	cout << "Podaj a \n";
	cin >> numberA;
	cout << "Podaj b \n";
	cin >> numberB;

	cout << "Wyra¿enie daje nam wynik: " << (numberA * numberA) + (numberB * numberB);

}
//6. Program obliczaj¹cy pole trójk¹ta o podstawie b i wysokoœci h
void task6()
{
	double theBaseOfTriangle;
	double height;

	cout << "Podaj podstawe a \n";
	cin >> theBaseOfTriangle;
	cout << "Podaj wysokoœæ b \n";
	cin >> height;
	cout << "Pole trójk¹ta wynosi: " << (theBaseOfTriangle * height) / 2;
}
//7. Program obliczaj¹cy objêtoœæ kuli o promieniu r
void task7()
{
	double radious;

	cout << "Podaj promieñ kuli \n";
	cin >> radious;
	cout << "Objêtoœæ kuli wynosi: " << (4.0 / 3) * M_PI * pow(radious, 3);


}
// 8. Program obliczaj¹cy pole trapezu o podstawach a i b oraz wysokoœci h
void task8()
{
	double trapezBase1;
	double trapezBase2;
	double height;

	cout << "Podaj pierwsz¹ podstawe trapezu \n";
	cin >> trapezBase1;
	cout << "Podaj drug¹ podstawe trapezu \n";
	cin >> trapezBase2;
	cout << "Podaj wysokoœæ trapeza \n";
	cin >> height;
	cout << "Pole trapezu wynosi: " << (1.0 / 2) * (trapezBase1 + trapezBase2) * height;
}
// 9. Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3. 
void task9()
{
	double number1;
	double number2;
	double number3;
	double numberWeight1;
	double numberWeight2;
	double numberWeight3;

	cout << "Podaj pierwsz¹ liczbe \n";
	cin >> number1;
	cout << "Podaj wagê pierwszej liczby \n";
	cin >> numberWeight1;

	cout << "Podaj drug¹ liczbe \n";
	cin >> number2;
	cout << "Podaj wagê drugiej liczby \n";
	cin >> numberWeight2;

	cout << "Podaj trzeci¹ liczbe \n";
	cin >> number3;
	cout << "Podaj wagê trzeciej liczby \n";
	cin >> numberWeight3;

	cout << "Œrednia wa¿ona z podanych liczb wynosi: " << ((number1 * numberWeight1) + (number2 * numberWeight2) + (number3 + numberWeight3)) 
		/ (numberWeight1 + numberWeight2 + numberWeight3);


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
}


