#include <iostream>

using namespace std;

void printArray(int a[], int size) {
	for(int i = 0; i < size; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void selectionSort(int a[], int size) {
	for(int i = 0; i < size-1; i++) {
		int indexOfMin = i, temp;
		for(int j = i; j < size; j++) {
			if(a[j] < a[indexOfMin]) {
				indexOfMin = j;
			}
		}
		if(indexOfMin != i) {
			temp = a[i];
			a[i] = a[indexOfMin];
			a[indexOfMin] = temp;
		}
	}
}

int main() {
	int a[] = {21,33, 22, 12, 32, 12, 1, 5, 2};
	int size = 9;

	printArray(a, size);
	selectionSort(a, size);
	printArray(a, size);

	return 0;
}
