#include <stdio.h>
#include <iostream>
using namespace std;


/**
*  �����ʵ�ͱ���x����һ������ͨ������õ�һ������Ҫ֪�����ǲ�������,û�кܺõİ취.��Ϊʵ���ڼ�����в���׼ȷ�Ĵ洢,
���Բ���ֱ���ж�����ʵ�����Ƿ����,(ʵ�ͺ������ǲ���ֱ�ӱȽϵ�,Ҫ��һ������ת�����ܱȽ�)����Ҫ��ȷ�����������Ƕ���.
����,һ����������ľ���ֵС��10-8ʱ���ǿ�����Ϊ����ʵ������ȵ�.
*/
bool isInteger(float f) {
	if (fabs((f - (int)f) < 1e-8)) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	float f = 1.1;
	cout << isInteger(f) << endl;
}