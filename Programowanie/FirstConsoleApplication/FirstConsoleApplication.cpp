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
//2. Program obliczaj�cy pole prostok�ta.
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
//3. Program obliczaj�cy obj�to�� sto�ka.
void task3() {
	double height;
	double radious;

	cout << "Podaj wysoko�� sto�ka\n";
	cin >> height;
	cout << "Podaj promie� sto�ka \n";
	cin >> radious;
	cout << "Obj�to�� sto�ka: " << (1.0 / 3) * M_PI * (radious * radious) * height;


}
//4. Program obliczaj�cy pole ko�a.
void task4()
{
	double radious;
	cout << "Podaj promie� ko�a \n";
	cin >> radious;
	cout << "Pole ko�a wynosi: " << M_PI * (radious * radious);
}
//5. Program obliczaj�cy warto�� wyra�enia a^2 + b^2
void task5()
{
	double numberA;
	double numberB; 

	cout << "Podaj a \n";
	cin >> numberA;
	cout << "Podaj b \n";
	cin >> numberB;

	cout << "Wyra�enie daje nam wynik: " << (numberA * numberA) + (numberB * numberB);

}
//6. Program obliczaj�cy pole tr�jk�ta o podstawie b i wysoko�ci h
void task6()
{
	double theBaseOfTriangle;
	double height;

	cout << "Podaj podstawe a \n";
	cin >> theBaseOfTriangle;
	cout << "Podaj wysoko�� b \n";
	cin >> height;
	cout << "Pole tr�jk�ta wynosi: " << (theBaseOfTriangle * height) / 2;
}
//7. Program obliczaj�cy obj�to�� kuli o promieniu r
void task7()
{
	double radious;

	cout << "Podaj promie� kuli \n";
	cin >> radious;
	cout << "Obj�to�� kuli wynosi: " << (4.0 / 3) * M_PI * pow(radious, 3);


}
// 8. Program obliczaj�cy pole trapezu o podstawach a i b oraz wysoko�ci h
void task8()
{
	double trapezBase1;
	double trapezBase2;
	double height;

	cout << "Podaj pierwsz� podstawe trapezu \n";
	cin >> trapezBase1;
	cout << "Podaj drug� podstawe trapezu \n";
	cin >> trapezBase2;
	cout << "Podaj wysoko�� trapeza \n";
	cin >> height;
	cout << "Pole trapezu wynosi: " << (1.0 / 2) * (trapezBase1 + trapezBase2) * height;
}
// 9. Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3. 
void task9()
{
	double number1;
	double number2;
	double number3;
	double numberWeight1;
	double numberWeight2;
	double numberWeight3;

	cout << "Podaj pierwsz� liczbe \n";
	cin >> number1;
	cout << "Podaj wag� pierwszej liczby \n";
	cin >> numberWeight1;

	cout << "Podaj drug� liczbe \n";
	cin >> number2;
	cout << "Podaj wag� drugiej liczby \n";
	cin >> numberWeight2;

	cout << "Podaj trzeci� liczbe \n";
	cin >> number3;
	cout << "Podaj wag� trzeciej liczby \n";
	cin >> numberWeight3;

	cout << "�rednia wa�ona z podanych liczb wynosi: " << ((number1 * numberWeight1) + (number2 * numberWeight2) + (number3 + numberWeight3)) 
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


