#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double result(double x);
	double a = -10, b = 10;
	double mid = (a + b) / 2;
	double limit = 1e-8;
	while (fabs(result(mid)) > limit) {
		if (result(a) * result(mid) > 0) {
			a = mid;
		}
		else {
			b = mid;
		}
		mid = (a + b) / 2;
	}
	cout << result(mid) << endl;
}

double result(double x) {
	return 2 * x * x * x - 4 * x * x + 3 * x - 6;
}