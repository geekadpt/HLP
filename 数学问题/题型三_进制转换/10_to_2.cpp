#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int  remainder = 0, j = 0, quotient,target;
	int arr[100];
	cin >> target;
	j = 0;
	while (target != 0) {
		remainder = target % 2;
		arr[j++] = remainder;
		target = target / 2;
	}
	for (int i = 0; i < j; i++) {
		cout << arr[i];
	}
	cout << endl;
}