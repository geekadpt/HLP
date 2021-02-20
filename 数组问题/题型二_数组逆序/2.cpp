#include <stdio.h>
#include <iostream>
using namespace std;
/**
*设定一个m行n列整型矩阵，编写一个函数swapt，是的它对A的元素进行交换。具体如下：第一个元素和倒数第一个元素交换，第二个元素和倒数第二个元素交换...
* 在具体实现时不允许另设矩阵。
* ———————————————
* |	00  |	01	|	02	|	03	|
* |	10	|	11	|	12	|	13	|
* |	20	|	21	|	22	|	23	|
* ———————————————
*			转换为：
*
* ———————————————
* |	23  |	22	|	21	|	20	|
* |	13	|	12	|	11	|	10	|
* |	03	|	02	|	01	|	00	|
* ———————————————
*/

void swapt(int a[][4],int rows) {
	int temp = 0;
	for (int i = 0; i < rows / 2; i++) {
		for (int j = 0; j<4; j++) {
			temp = a[i][j];
			a[i][j] = a[rows - i -1][4 - j -1];
			a[rows - i - 1][4 - j - 1] = temp;
		}
	}

	//如果行数为奇数，需要单独处理中间一行
	if (rows % 2) {
		for (int k = 0; k < 2; k++) {
			temp = a[rows/2][k];
			a[rows/2][k] = a[rows/2][4 - k - 1];
			a[rows/2][4 - k - 1] = temp;
		}
	}
}
//拉伸成一维
void print2DArray(int *a,int m,int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			//cout << a[i][j];
			cout << *(a + i * n + j) << " ";
		}
		cout << endl;
	}
}
int main() {
	int a[][4] = {
		{00,01,02,03},
		{10,11,12,13},
		{20,21,22,23},
	};

	
	//指针强转
	print2DArray((int*)a,3,4);
	swapt(a,3);
	print2DArray((int*)a, 3, 4);
}