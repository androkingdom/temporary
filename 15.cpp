#include <iostream>

using namespace std;

void printArray(int a[], int size) {
	for(int  i = 0; i < size; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void insertionSort(int a[], int size) {
	for(int i = 1; i < size; i++) {
		int key = a[i];
		int j = i-1;
		while(j>=0 && key < a[j]) {
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}
}


int main() {
	int a[] = {12, 44, 12, 2, 2, 12, 34, 1222, 212};
	int size = 9;

	printArray(a, size);
	insertionSort(a, size);
	printArray(a, size);
	return 0;
}
