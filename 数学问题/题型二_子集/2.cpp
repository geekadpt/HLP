/*
* ����һ��n�������ļ���S����д������S������Ԫ�ظ���ΪM��0<M<N�����Ӽ������磺N=4��S= {1,2,3,4}����������Ϊ��{1,2}��{1,3}��{1,4}��{2,3}��{2,4}��{3,4,}��
*/
#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int N = 4, M = 2 , counter=0,counter_1=0,j=0;
	int S[4] = { 1,2,3,4 };//�洢Ԫ��
	int arr[50] = { 0 };//�洢�������Ķ�������
	int num = pow(2, N);

	for (int i = 0; i < num; i++) {
		//����ά��ʼ��0
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