#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


//ͳ��һ���ַ�������ĸ�ַ����ִ���
void countLetter(string s) {
	//cout << s.size();
	int digit = 0, upper = 0,lower = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			upper++;
		}
		if (s[i] >= 'a' && s[i] <= 'z') {
			lower++;
		}
		if (s[i] >= '0' && s[i] <= '9') {
			digit++;
		}
	}
	cout << "���ָ�����" << digit << endl;
	cout << "Сд��ĸ������" << lower << endl;
	cout << "��д��ĸ������" << upper << endl;
}

int main() {
	string s= "12345ABCDEabcde";
	countLetter(s);
}