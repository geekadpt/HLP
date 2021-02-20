#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int* function(string s) {
	int arr[200] = { 0 };
	for (int i = 0; i < s.size(); i++)
	{
		//cout << (int)s[i] << " ";
		if ((int)s[i] >= (int)'a' && (int)s[i] <= (int)'z') {
			arr[(int)s[i]]++;
		
		}
	}
	return arr;
}

int main() {
	string s = "abcdABCD1234";
	int *a = function(s);
	for (int i = (int)'a'; i <= (int)'z'; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}