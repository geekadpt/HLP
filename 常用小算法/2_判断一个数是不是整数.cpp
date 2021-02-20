#include <stdio.h>
#include <iostream>
using namespace std;


/**
*  如果用实型变量x接收一个数或通过计算得到一个数后要知道它是不是整数,没有很好的办法.因为实数在计算机中不能准确的存储,
所以不能直接判断两个实型量是否相等,(实型和整形是不能直接比较的,要做一步类型转换才能比较)首先要明确能允许的误差是多少.
比如,一般情况当误差的绝对值小于10-8时我们可以认为两个实数是相等的.
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