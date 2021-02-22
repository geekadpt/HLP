#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;

bool is_prime(int x) {
	for (int i = 2; i < x; i++) {
		if (x % 2 == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int point_1=1, point_2=0;
	for (int i = 2; i <= 100; i++) {
		if (is_prime(i)) {
			point_2 = i;
			if ((point_2 - point_1) == 2) {
				cout << "(" << point_1 << "," << point_2 << ")";
			}else {
				point_1 = i;
			}
		}
	}
}