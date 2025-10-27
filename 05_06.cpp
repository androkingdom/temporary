#include <iostream>
// 5. Write a C /C++ program to implement the stack using array data structure
using namespace std;
class Stack {
private:
    int top = -1;
    int maxSize;
    int* arr;
    
public:
    Stack(int totalSize): maxSize(totalSize) {
        arr = new int[maxSize];
    }
    
    void push(int value) {
        if(top == maxSize - 1) {
            cout << "Stack is full" << endl;
            return;
        }
        arr[++top] = value;
    }

    int pop() {
        if(top == -1) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top--];
    }

    void show() {
        if(top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }
        for(int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    ~Stack() {
        delete[] arr;
    }
};


int main() {
    Stack stack(5);
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.show();
    cout << stack.pop() << endl;
    cout << stack.pop() << endl;
    cout << stack.pop() << endl;
    stack.show();
    return 0;
}