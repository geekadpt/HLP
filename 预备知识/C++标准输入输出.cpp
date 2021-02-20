//源文件

#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int a[] = { 0 };
	//左侧istream对象，右侧运算对象
	int i=0;
	while (cin >> a[i]) {
		i++;
	}
	cout << "数组长度：" << i << endl;

	for (int j = 0; j < i; j++) {
		//左侧ostream对象，右侧要输出的内容
		cout << a[j] << endl;;
	}
}