#include <stdio.h>
#include <iostream>
using namespace std;

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
int partition(int arr[],int low ,int high) {
	int pivot = arr[low];
	int i = low;
	int j = high + 1;
	while (i<j) {
		i++;
		while (low < high && arr[i] < pivot) {
			i++;
		}

		j--;
		while (low < high && arr[j] > pivot) {
			j--;
		}

		if (i < j) {
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[low], &arr[j]);
	return j;
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}
void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		/* pi is partitioning index, arr[p] is now
		at right place */
		int pi = partition(arr, low, high);

		// Separately sort elements before  
		// partition and after partition  
		quickSort(arr, low, pi - 1);
		//printArray(arr, 6);
		quickSort(arr, pi + 1, high);
	}
}

int main() {
	int arr[] = { 10, 7, 8, 9, 1, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printArray(arr, n);
	quickSort(arr, 0, n-1);
	printArray(arr, n);
}