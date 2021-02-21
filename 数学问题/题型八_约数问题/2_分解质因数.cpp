#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n = 0,sum = 1;
	cin >> n;
	//求约数和
	for (int i = 2; i < n;) {
		if (n % i == 0) {
			sum += i;
			n = n / i;
			cout << i << " ";
		}
		else {
			i++;
		}
	}
	cout << endl;
}