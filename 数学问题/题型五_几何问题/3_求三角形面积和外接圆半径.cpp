#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;

class Point
{
private:
	float x, y;
public:
	Point(double a, double b) { x = a; y = b; }
	void print();
	friend double pointDistance(Point p1, Point p2);
	friend double area(Point p1, Point p2, Point p3);
};

void Point::print()
{
	cout << "(" << x << "," << y << ")" << " ";
}

double pointDistance(Point p1, Point p2)
{
	double distance = 0;
	distance = sqrt((p1.y - p2.y) * (p1.y - p2.y) + (p1.x - p2.x) * (p1.x - p2.x));
	return distance;
}

double area(Point p1, Point p2, Point p3)
{
	double area = 0;
	double a = 0, b = 0, c = 0, s = 0;
	a = pointDistance(p1, p2);
	b = pointDistance(p2, p3);
	c = pointDistance(p1, p3);
	s = 0.5 * (a + b + c);
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	return area;
}
double Circumcircle(double s, double a, double b ,double c) {
	return a * b * c / (4 * s);
}
int main()
{
	Point p1(5, 10);
	Point p2(1, 67);
	Point p3(50, -25);
	cout << "三角形顶点坐标为：";
	p1.print();
	p2.print();
	p3.print();
	cout << endl;
	cout << "三角形面积为：";
	cout << area(p1, p2, p3) << endl;
	cout << "三角形外接圆半径为：";
	cout << Circumcircle(area(p1, p2, p3),pointDistance(p1, p2) , pointDistance(p2, p3) , pointDistance(p1, p3)) << endl;
	return 0;
}