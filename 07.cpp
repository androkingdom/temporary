#include <iostream>
// 7. Implement a Stack using Linked List
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class Llist{
public:
    Node* head = new Node();
    Llist(int data){
        head->data = (data) ? data : NULL;
        head->next = NULL;
    };
    void insert(int x){
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = head;
        head = newNode;
    }
};

class Stack{
public:
    int top = -1;
    int maxSize;
    Llist* arr;
    Stack(int totalSize): maxSize(totalSize){}



};

int main() {
    ;
    return 0;
}