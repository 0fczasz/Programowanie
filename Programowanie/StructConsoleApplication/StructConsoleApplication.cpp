#include <iostream>
using namespace std;

struct point
{
	int x;
	int y;
	int z;
};
double distanceFromCenter(point p)
{
	double distance = sqrt(p.x * p.x + p.y * p.y + p.z * p.z);
	return distance;

}


double distanceFromCenter(int x, int y, int z)
{
	double distance = sqrt(x * x + y * y + z * z);
	return distance;

}

int main()
{
	setlocale(LC_CTYPE, "polish");
	int x, y, z;

	cout << "podaj x \n";
	cin >> x;
	cout << "podaj y \n";
	cin >> y;
	cout << "podaj z \n";
	cin >> z;

	cout << "Odleglosc " << distanceFromCenter(x, y, z) << "\n";
	int x1, y1;
	int x2, y2;

	int xx[50], yy[50], zz[50];

	xx[3] = 5;
	yy[3] = 7;
	zz[3] = 77;

	point firstPoint;
	firstPoint.x = 3;
	firstPoint.y = 5;
	firstPoint.z = 8;

	cout << "Odleglosc " << distanceFromCenter(firstPoint.x, firstPoint.y, firstPoint.z) << "\n";
	cout << "Odleglosc " << distanceFromCenter(firstPoint) << "\n";


}

