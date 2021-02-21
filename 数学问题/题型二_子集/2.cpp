/*
* 设有一个n个整数的集合S，编写函数求S得所有元素个数为M（0<M<N）的子集。例如：N=4，S= {1,2,3,4}，则输出结果为：{1,2}、{1,3}、{1,4}、{2,3}、{2,4}、{3,4,}。
*/
#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int N = 4, M = 2 , counter=0,counter_1=0,j=0;
	int S[4] = { 1,2,3,4 };//存储元素
	int arr[50] = { 0 };//存储计数器的二进制数
	int num = pow(2, N);

	for (int i = 0; i < num; i++) {
		//将二维初始化0
		for (j = 0; j < N; j++) {
			arr[j] = 0;
		}
		
		counter = i;
		counter_1 = 0;
		j = 0;
		while (counter != 0) {
			arr[j++] = counter % 2;
			if (counter % 2 == 1) {
				counter_1++;
			}
			counter = counter / 2;
		}
		/*for (j = 0; j < N; j++) {
			cout << arr[j];
		}
		cout << endl;*/
		if (counter_1 == M) {
			cout <<  "{";
			for (j = 0; j < N; j++) {
				//cout << "couter_1:" <<  counter_1 << endl;
				if (arr[j] == 1) {
					if (counter_1 > 1) {
						cout << S[j] << ",";
					}
					else {
						//cout << "couter_1:" << counter_1 ;
						cout << S[j];
					}
					counter_1--;
				}
			}
			cout << "}";
		}
	}








}