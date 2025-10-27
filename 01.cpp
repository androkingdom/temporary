#include <iostream>
// 1. Write a C/C++ program to print the elements of an 2Darray row-wise and column

using namespace std;

int main() {
    int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // row-wise
    cout << "row-wise" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    // column-wise
    cout << "column-wise" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << array[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}