/*
* ����������(3,3,2,2,4,4,4,4),��(3,3)��(2,2)��(4,4,4)���Ǳ���ƽ̨���������ƽ̨�ĳ�����3.
*/

#include <stdio.h>
#include <iostream>
using namespace std;

int platform(int arr[],int n) {
	int counter = 1, max = 1,temp = arr[0],i=1;

	while (i < n) {
		counter = 1, temp = arr[i];
		i++;
		while (arr[i] == temp) {
			counter ++;
			i++;
		}
		if (counter > max) {
			max = counter;
		}
	}
	return max;
}

int main() {
	int a[] = { 3,3,2,2,4,4,4,4 };
	int n = sizeof(a) / sizeof(a[0]);
	cout << platform(a, 8) << endl;
}