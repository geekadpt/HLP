/*
* 假如有序列(3,3,2,2,4,4,4,4),则(3,3)和(2,2)及(4,4,4)都是饱和平台，并且最长的平台的长度是3.
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