/*
    Question: Given the head of the singly linked list remove the kth node from the end of the list
*/

#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    ~Node() {}
};

void insertAtTail(Node* &head, Node* &tail, int data) {
    if(tail == NULL) {
        Node* temp = new Node(data);
        tail = head = temp;
    } else {
        Node* temp = new Node(data);
        tail->next = temp;
        tail = temp;
    }
}

void removeKthEle(Node* &head, int k) {
    Node* ptr1 = head;
    Node* ptr2 = head;

    // Move k steps ahead
    int count = k;
    while(count != 0) {
        ptr2 = ptr2->next;
        count -= 1;
    }

    if(ptr2 == NULL) {  // Delete head;
        Node* temp = ptr1;
        head = head->next;
        delete temp;
        return ;
    } 

    Node* prev = NULL;
    while(ptr2 != NULL) {
        prev = ptr1;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    Node* temp = ptr1;
    prev->next = ptr1->next;
    delete ptr1;


}

void print(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main() {

    Node* n;
    Node* head = n;
    Node* tail = n;

    insertAtTail(head, tail, 1);
    insertAtTail(head, tail, 2);
    insertAtTail(head, tail, 3);
    insertAtTail(head, tail, 4);
    insertAtTail(head, tail, 5);

    print(head);

    removeKthEle(head, 5);
    print(head);
    return 0;
}