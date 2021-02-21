/*
* sin(x)的泰勒公式近似值
*/

#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

double taylor_sin(double x) {
	double taylor = x, s = x;
	double i = 0;
	while (fabs(taylor) > 5e-5) {
		i = i++;
		taylor = -(taylor * x * x) / ((2 * i) * (2 * i + 1));
		//cout << taylor << " " << s << " " << i;
		s += taylor;
	}
	return s;
	
}

int main() {
	//cout << (5e-5);
	double x;
	cin >> x;
	cout << taylor_sin(x) << endl;
}