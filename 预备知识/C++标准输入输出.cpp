//Դ�ļ�

#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int a[] = { 0 };
	//���istream�����Ҳ��������
	int i=0;
	while (cin >> a[i]) {
		i++;
	}
	cout << "���鳤�ȣ�" << i << endl;

	for (int j = 0; j < i; j++) {
		//���ostream�����Ҳ�Ҫ���������
		cout << a[j] << endl;;
	}
}