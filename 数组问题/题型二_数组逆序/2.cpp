#include <stdio.h>
#include <iostream>
using namespace std;
/**
*�趨һ��m��n�����;��󣬱�дһ������swapt���ǵ�����A��Ԫ�ؽ��н������������£���һ��Ԫ�غ͵�����һ��Ԫ�ؽ������ڶ���Ԫ�غ͵����ڶ���Ԫ�ؽ���...
* �ھ���ʵ��ʱ�������������
* ������������������������������
* |	00  |	01	|	02	|	03	|
* |	10	|	11	|	12	|	13	|
* |	20	|	21	|	22	|	23	|
* ������������������������������
*			ת��Ϊ��
*
* ������������������������������
* |	23  |	22	|	21	|	20	|
* |	13	|	12	|	11	|	10	|
* |	03	|	02	|	01	|	00	|
* ������������������������������
*/

void swapt(int a[][4],int rows) {
	int temp = 0;
	for (int i = 0; i < rows / 2; i++) {
		for (int j = 0; j<4; j++) {
			temp = a[i][j];
			a[i][j] = a[rows - i -1][4 - j -1];
			a[rows - i - 1][4 - j - 1] = temp;
		}
	}

	//�������Ϊ��������Ҫ���������м�һ��
	if (rows % 2) {
		for (int k = 0; k < 2; k++) {
			temp = a[rows/2][k];
			a[rows/2][k] = a[rows/2][4 - k - 1];
			a[rows/2][4 - k - 1] = temp;
		}
	}
}
//�����һά
void print2DArray(int *a,int m,int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			//cout << a[i][j];
			cout << *(a + i * n + j) << " ";
		}
		cout << endl;
	}
}
int main() {
	int a[][4] = {
		{00,01,02,03},
		{10,11,12,13},
		{20,21,22,23},
	};

	
	//ָ��ǿת
	print2DArray((int*)a,3,4);
	swapt(a,3);
	print2DArray((int*)a, 3, 4);
}