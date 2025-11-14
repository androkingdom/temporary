#include <iostream>

using namespace std;

void printArray(int a[], int size) {
	for (int i = 0; i < size; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void bubbleSort(int a[], int size) {
	int temp;
	for(int i = 0; i < size-1; i++ ) {
		for (int j = 0; j < size-1-i; j++) {
			if(a[j] > a[j+1]) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

int main() {
 	int a[] = {21,213,21,34,3,53,12,2};
	int size = 8;

	printArray(a, size);
	bubbleSort(a, size);
	printArray(a,size);

	return 0;
}
