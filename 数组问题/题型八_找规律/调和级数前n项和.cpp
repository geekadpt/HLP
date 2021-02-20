#include <stdio.h>
#include <iostream>
using namespace std;

int gcd(int a , int b) {
	int temp = 0, r = 0, product = 0;
	if (a < b) {
		temp = b;
		b = a;
		a = temp;
	}
	r = a % b;
	product = a * b;

	while (r != 0) {
		a = b;
		b = r;
		r = a % b;
	}
	return b;
}

int main() {
	int sum = 1,n=3;
	for (int i = 2; i <= n; i++) {
		sum = sum * i + 1;
	}
	int a = gcd(sum, n);
	sum = sum / a;
	n = n / a;
	cout << sum << "/" << n <<endl;

}