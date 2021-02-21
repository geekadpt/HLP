#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;

//ţ�ٵ������󷽳�2x^3 - 4x^2 +3x -6 = 0��x=1.5�����ĸ���

int main() {
	double f(double x);
	double f1(double x);
	double x,x1,y1,y2;
	cin >> x;
	do
	{
		x1 = x;
		y1 = f(x);
		y2 = derivative(x);
		x = x1 - y1 / y2;
	} while (fabs(x-x1) > 1e-5);
	cout << x1 << endl;
}

double f(double x) {
	return 2 * x * x * x - 4 * x * x + 3 * x - 6;
}
//���̵���
double derivative(double x) {
	return 6 * x * x - 8 * x + 3;
}
