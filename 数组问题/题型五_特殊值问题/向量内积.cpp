/*
* �����ж�ά����A10x10��ÿ�е����Ԫ�ع�������B��ÿ�е���СԪ�ع�������C����B��C���ڻ���
*/

#include <stdio.h>
#include <iostream>
using namespace std;

void print2DArray(int* a, int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			//cout << a[i][j];
			cout << *(a + i * n + j) << " ";
		}
		cout << endl;
	}
}
int innerProduct(int B[],int C[],int d) {
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			sum += B[i] * C[j];
		}
	}
	return sum;
}
int main() {
	int A[][10] = { 0 };
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			A[i][j] = i + j;
		}
	}
	//ָ��ǿת
	print2DArray((int*)A, 10, 10);

	int cols_max = 0, rows_max = 0;
	int B[] = { 0 }, C[] = { 0 };
	for (int i = 0; i < 10; i++) {
		rows_max = A[i][0];
		for (int j = 1; j < 10; j++) {
			if (A[i][j] > rows_max) {
				rows_max = A[i][j];
			}
		}
		B[i] = rows_max;
	}
	for (int i = 0; i < 10; i++) {
		cols_max = A[0][i];
		for (int j = 1; j < 10; j++) {
			if (A[j][i] > cols_max) {
				cols_max = A[j][i];
			}
		}
		C[i] = cols_max;
	}
	cout << innerProduct(B, C, 10) << endl;
}