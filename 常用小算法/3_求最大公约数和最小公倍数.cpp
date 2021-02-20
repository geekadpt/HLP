#include <stdio.h>
#include <iostream>
using namespace std;

/**
* （1）最小公倍数 = 两个数的乘积除以他们的最大公约数，关键是求出最大公约数。
* （2）求最大公约数用辗转相除法（又名欧几里得算法；
*/

int main() {
	int a = 0, b = 0, temp = 0, r = 0,product = 0;
	cout << "输入两个数，空格隔开：" << endl;
	cin >> a >> b;
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
	cout << "最大公约数：" << b << "最小公倍数：" << product / b << endl;

}