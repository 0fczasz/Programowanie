#include <iostream>
using namespace std;
//napisz klasy ktore beda opisywac kwadrat prostokat i trapez
class Quadrangle
{
protected:
	double sideA, sideB, sideC, sideD, height;
public:
	Quadrangle(double firstSide,
		double secondSide,
		double thirdSide,
		double fourthSide,
		double h)
	{
		sideA = firstSide;
		sideB = secondSide;
		sideC = thirdSide;
		sideD = fourthSide;
		height = h;
	}
};

class Square: public Rectangle
{
protected:

public:
	Square(double side) : Rectangle(side,side)
	{
		//height = sideA = sideB = sideC = sideD = side;
	}
};

class Rectangle: public Quadrangle
{
protected:

public:
	Rectangle(double firstSide, double secondSide): Quadrangle(firstSide,secondSide,firstSide,secondSide,secondSide)
	{
		//sideA = sideC = firstSide;
		//sideB = sideD = secondSide;

	}
};

class Trapeze: public Quadrangle
{
protected:

public:
	Trapeze(double firstSide, double secondSide, double thirdSide, double fourthSide, double h): Quadrangle(firstSide, secondSide, thirdSide, fourthSide, h)
	{
	
	/*
	
		sideA = firstSide;
		sideB = secondSide;
		sideC = thirdSide;
		sideD = fourthSide;
		height = h; 
		
	*/
	}
};

int main()
{
	
	Rectangle r(10, 5);
	
	Square s(6);
	
	Trapeze t(10, 6, 4, 5, 3);

}
