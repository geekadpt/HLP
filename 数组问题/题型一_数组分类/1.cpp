/*
设计一个C语言函数，将整数数组A[n]划分成左右两个部分，使左边所有元素值为奇数，右边所有值为偶数。
*/

#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int a[] = { 1,2,3,4,5,6,7,8,9,0 };
	int i = 0, j = 9, temp;
	while (i < j) {
		if (i < j && a[i] % 2 != 0) {
			i++;
		}
		if (i < j && a[j] % 2 == 0) {
			j--;
		}
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
	for (int i = 0;i < 10;i++) {
		cout << a[i];
	}
	cout << endl;
}