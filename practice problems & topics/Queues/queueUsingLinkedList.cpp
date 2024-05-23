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

void push(Node* &head, int data) {
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void pop(Node* &head) {
    Node* curr = head;
    Node* prev = NULL;

    int count = 1;
    while(curr->next != NULL) {
        prev = curr;
        curr = curr->next;
    }

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}

void front(Node* &head) {
    cout << head->data << endl;
}   

void rear(Node* &tail) {
    if(tail == NULL){
        cout << "Queue is empty" << endl;
    }
    else {
        cout << tail->data << endl;
    }
}

bool isEmpty(Node* &head) {
    if(head == NULL) {
        return true;
    }
    else {
        return false;
    }
}
void display(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main() {

    Node* n = new Node(3);
    Node* head = n;
    Node* tail = n;

    front(head);
    display(head);

    push(head, 4);
    front(head);
    display(head);

    push(head, 5);
    display(head);

    cout << "Rear Element is: ";
    rear(tail);

    pop(head);
    display(head);

    Node* n1;
    cout << isEmpty(n1) << endl;
    cout << isEmpty(head) << endl;

    return 0;
}