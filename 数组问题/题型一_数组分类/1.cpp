/*
���һ��C���Ժ���������������A[n]���ֳ������������֣�ʹ�������Ԫ��ֵΪ�������ұ�����ֵΪż����
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