#include <iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;
	int z;
public:
	//void SetX
};
double distanceFromCenter(Point p)
{
	double distance = sqrt(p.x * p.x + p.y * p.y + p.z * p.z);
	return distance;

}

int main()
{
	setlocale(LC_CTYPE, "polish");
	

	Point firstPoint;
	firstPoint.x = 3;
	firstPoint.y = 5;
	firstPoint.z = 8;

	cout << "Odleglosc " << distanceFromCenter(firstPoint) << "\n";


}

