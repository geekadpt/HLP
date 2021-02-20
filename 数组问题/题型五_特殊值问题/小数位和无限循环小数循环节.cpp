/*
* 使用数组精确计算M/N（0<M<N<=100)的各小数位的值。如果M/N是无限循环小数，则计算输出它的第一个循环节，同时要求输出循环节的起止位置。
*/
#include <stdio.h>
#include <iostream>
using namespace std;

int function(int m , int n) {
	
	//商
	int quotient[20] = { -1 };
	//余数
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
		//商相等，余数也相等说明出现了循环
		//cout << i << endl;
		//cout << remainder[i] << endl;
		//cout <<  j << endl;
		if (remainder[i] == j && j!=0) {
			cout << "出现循环" << endl;
			int a = --k;
			while (quotient[a] != i) {
				//cout << quotient[a];
				a--;
			}
			//cout << endl;
			cout << "循环节：" << endl;
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
	cout << "小数部分" << endl;
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