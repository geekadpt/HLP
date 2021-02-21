/*
* 编写一个程序，对输入的任意正整数n,打印出集合{0,1，...，n-1}的所有子集。例如：输入3时，输出时：{}，{0}，{1}，{0，1}，{2}，{0,2}，{1，2}，{0，1，2}。
*/
#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int n = 3, remainder=0,j=0,quotient,k=0,m=0,counter;
	int arr[20] = { 0 };
	//计算个数
	int sum = pow(2, n);
	for (int i = 0; i < sum; i++) {
		//每次将存储二进制的数组初始化为0
		for (j = 0; j < n; j++) {
			arr[j] = 0;
		}
		//将计数器转换为二进制
		counter = i;
		j = 0;
		while (counter != 0) {
			remainder = counter % 2;
			arr[j++] = remainder;
			counter = counter / 2;
		}

		//如果计数器的二进制里有1,则输出对应的数组下标，只是利用这个规律而已
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