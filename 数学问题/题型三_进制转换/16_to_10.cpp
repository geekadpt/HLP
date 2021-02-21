/*
* 十六进制转十进制
*/

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n = 0, temp = 0, sum=0;
	string S;
	cin >> S;
	n = S.size();
	for (int i = 0; i < n; i++) {
        switch (S[i])
        {
            case 'A': temp = 10; break;
            case 'B': temp = 11; break;
            case 'C': temp = 12; break;
            case 'D': temp = 13; break;
            case 'E': temp = 14; break;
            case 'F': temp = 15; break;
            default: temp = S[i] - '0'; break;
        }
        sum += temp * (pow(16, n - i - 1));
	}
    cout << sum << endl;
}