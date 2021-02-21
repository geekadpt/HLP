#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n = 0, sum = 0;
	cin >> n;
	//求约数和
	for (int i = 1; i <= n;i++) {
		if (n % i == 0) {
			sum += i;
			//n = n / i;
			if (i == n) {
				cout << i << " ";
			}
			else {
				cout << i << "+" << " ";
			}
			
		}
	}
	cout << "=" << sum << endl;
}