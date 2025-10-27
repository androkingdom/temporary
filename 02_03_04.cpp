#include <iostream>
// 4. Perform insertion at a specific position in an existing Linked List
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(){
        data = (data)? data : NULL;
        next = NULL;
    }
};

class Llist{
public:
    Node* head = new Node();
    Llist(int data){
        head->data = (data) ? data : NULL;
        head->next = NULL;
    }
    void insert(int x){
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = NULL;

        if(!head){
            head = newNode;
            return;
        };

        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }

        temp->next = newNode;
    }
    void insertAtBeginning(int x){
        Node* temp = new Node();
        temp->data = x;
        temp->next = head;
        head = temp;
    }
    void insertAt(int x, int pos) {
        if (pos < 1) {
            cout << "Invalid position" << endl;
            return;
        }

        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = NULL;

        // Insert at head
        if (pos == 1) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* temp = head;
        for (int i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Position out of range" << endl;
            delete newNode;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void show(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Llist l1(1);
    l1.insert(2);
    l1.insert(3);
    l1.show();
    l1.insertAtBeginning(3);
    l1.show();
    l1.insertAt(4, 2);
    l1.show();

    return 0;
}