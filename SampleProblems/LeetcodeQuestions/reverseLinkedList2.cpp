/*
    Check the question at: https://leetcode.com/problems/reverse-linked-list-ii/
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

void insertAtHead(Node* &head, int data) {
    if(head == NULL) {
        Node* temp = new Node(data);
        head = temp;
    }
    else {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
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

    Node* ll;
    Node* head = ll;
    Node* tail = ll;

    insertAtTail(head, tail, 1);
    insertAtTail(head, tail, 2);
    insertAtTail(head, tail, 3);
    insertAtTail(head, tail, 4);
    insertAtTail(head, tail, 5);

    print(head);

    return 0;
}