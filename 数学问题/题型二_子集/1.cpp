/*
* ��дһ�����򣬶����������������n,��ӡ������{0,1��...��n-1}�������Ӽ������磺����3ʱ�����ʱ��{}��{0}��{1}��{0��1}��{2}��{0,2}��{1��2}��{0��1��2}��
*/
#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int n = 3, remainder=0,j=0,quotient,k=0,m=0,counter;
	int arr[20] = { 0 };
	//�������
	int sum = pow(2, n);
	for (int i = 0; i < sum; i++) {
		//ÿ�ν��洢�����Ƶ������ʼ��Ϊ0
		for (j = 0; j < n; j++) {
			arr[j] = 0;
		}
		//��������ת��Ϊ������
		counter = i;
		j = 0;
		while (counter != 0) {
			remainder = counter % 2;
			arr[j++] = remainder;
			counter = counter / 2;
		}

		//����������Ķ���������1,�������Ӧ�������±ֻ꣬������������ɶ���
		cout << "{" ;
		k = 0;
		m = 0;
		while (k < j) {
			//cout << arr[k] << " ";
			if (arr[k] == 1) {
				cout << m << " ";
			}
			k++;
			m++;
		}
		cout << "}" << endl;
	}
}