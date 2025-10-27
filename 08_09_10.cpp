#include <iostream>
// 8. Implement a Queue using Array
// 9. Perform Enqueue (insertion) on a Queue (Array)
// 10. Perform Dequeue (deletion) on a Queue (Array)

using namespace std;

class Queue {
private:
    int front, rear, maxSize, *arr;
public:
    Queue(int size): maxSize(size) {
        arr = new int[maxSize];
        front = rear = -1;
    }
    void enqueue(int x) {
        if(rear == maxSize - 1) {
            cout << "Queue is full" << endl;
            return;
        }
        arr[++rear] = x;
    }
    int dequeue() {
        if(front == rear) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[++front];
    }
};

int main() {
    Queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    return 0;
}