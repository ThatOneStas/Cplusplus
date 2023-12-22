#include <iostream>
using namespace std;

void bubbleSort(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		bool isSorted = true;
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				isSorted = false;
			}
		}
		if (isSorted) {
			break;
		}
	}
}

void selectionSort(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		int min = INT32_MAX;
		int index;
		for (int j = i; j < size; j++) {
			if (min > arr[j]) {
				min = arr[j];
				index = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
}

void insertionSort(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		int min = INT32_MAX;
		int index;
		for (int j = i; j < size; j++) {
			if (min > arr[j]) {
				min = arr[j];
				index = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
}

void printArr(int* arr, int size) {
	cout << "------------------------------" << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl << "------------------------------" << endl;
}

int main()
{
	int size = 8;
	int* arr = new int[8];
	arr[0] = 11;
	arr[1] = 52;
	arr[2] = 1;
	arr[3] = 3;
	arr[4] = 5;
	arr[5] = 71;
	arr[6] = 45;
	arr[7] = 17;

	printArr(arr, size);
	selectionSort(arr, size);
	printArr(arr, size);
}
