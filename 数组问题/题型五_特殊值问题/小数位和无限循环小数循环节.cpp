/*
* ʹ�����龫ȷ����M/N��0<M<N<=100)�ĸ�С��λ��ֵ�����M/N������ѭ��С���������������ĵ�һ��ѭ���ڣ�ͬʱҪ�����ѭ���ڵ���ֹλ�á�
*/
#include <stdio.h>
#include <iostream>
using namespace std;

int function(int m , int n) {
	
	//��
	int quotient[20] = { -1 };
	//����
	int remainder[10] = { -1 };

	int i=0,j=0,k=-1;
	i = m / n;
	j = m % n;
	quotient[++k] = i;
	remainder[i] =j;
	while (j!=0 && k < 20) {
		i = (j * 10) / n;
		j = (j * 10) % n;
		quotient[++k] = i;
		//����ȣ�����Ҳ���˵��������ѭ��
		//cout << i << endl;
		//cout << remainder[i] << endl;
		//cout <<  j << endl;
		if (remainder[i] == j && j!=0) {
			cout << "����ѭ��" << endl;
			int a = --k;
			while (quotient[a] != i) {
				//cout << quotient[a];
				a--;
			}
			//cout << endl;
			cout << "ѭ���ڣ�" << endl;
			for (int b = a; b <= k; b++) {
				cout << quotient[b];
			}
			cout  << endl;
			return 0;
		}
		else {
			remainder[i] = j;
		}
	}
	int a = 1;
	cout << "С������" << endl;
	while(quotient[a] !=0){
		cout <<  quotient[a];
		a++;
	}
}

int main() {
	int M = 25, N = 30;

	//M = 1;
	//N = 4;

	//M = 1;
	//N = 3;
	function(M, N);
}