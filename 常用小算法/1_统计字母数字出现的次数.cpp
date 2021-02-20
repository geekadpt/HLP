#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


//统计一个字符串中字母字符出现次数
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
	cout << "数字个数：" << digit << endl;
	cout << "小写字母个数：" << lower << endl;
	cout << "大写字母个数：" << upper << endl;
}

int main() {
	string s= "12345ABCDEabcde";
	countLetter(s);
}