#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int M[] = { 0 };
	int length = 0;
	int item = 1;
	int point = 0;
	M[length++] = item;
	while (length <= 100) {
		item = M[point] * 2 + 1;
		M[length++] = item;
		item = M[point] * 3 + 1;
		M[length++] = item;
		point++;
	}
	for (int i = 0; i < 100; i++) {
		cout << M[i] << " ";
	}
	cout << endl;
}