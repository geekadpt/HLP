/**
* ��8�������մӴ�С˳���ŵ�һ�������У�����һ������Ҫ�����۰���ҷ����ҳ������ǵڼ���Ԫ�ص�ֵ��
*
*/

#include <stdio.h>
#include <iostream>
using namespace std;

int harfSearch(int arr[],int target,int length) {
	int low = 0, high = length - 1,position = 0;
	while (low <= high) {
		position = (low + high) / 2;
		//cout << arr[position];
		if (arr[position] == target) {
			return position + 1;
		}
		else if (arr[position] < target) {
			high = position - 1;
			
		}
		else {
			low = position + 1;
		}
	}
	return -1;
}

int main() {
	int a[] = { 8,7,6,5,4,3,2,1 };
	cout << harfSearch(a, 4, 8) << endl;
}