#include <stdio.h>
#include <iostream>
using namespace std;

/**
* ��1����С������ = �������ĳ˻��������ǵ����Լ�����ؼ���������Լ����
* ��2�������Լ����շת�����������ŷ������㷨��
*/

int main() {
	int a = 0, b = 0, temp = 0, r = 0,product = 0;
	cout << "�������������ո������" << endl;
	cin >> a >> b;
	if (a < b) {
		temp = b;
		b = a;
		a = temp;
	}
	r = a % b;
	product = a * b;

	while (r != 0) {
		a = b;
		b = r;
		r = a % b;
	}
	cout << "���Լ����" << b << "��С��������" << product / b << endl;

}