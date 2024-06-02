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

    ~Node() {
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
    }
        
};

void insertAtHead(Node* &head, int data) {
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int data) {
    Node* temp = new Node(data);
    tail->next = temp;
    tail = tail->next;

}

void insertAtAnyPosition(Node* &head, Node* &tail, int pos, int data) {
    
    Node* temp = head;
    int count = 1;

    if(pos == 1) {
        insertAtHead(head, data);
        return;
    }
    while(count < pos-1) {
        temp = temp->next;
        count += 1; 
    }

    if(temp->next == NULL) {
        insertAtTail(tail, data);
        return;
    }

    Node* n = new Node(data);
    n->next = temp->next;
    temp->next = n;
}

void deleteAtAnyPosition(Node* &head, Node* &tail, int pos) {
    Node* curr = head;
    Node* prev = NULL;
    if(pos == 1) {
        Node* start = head;
        head = head->next;
        start->next = NULL;
        delete start;
    }
    else {
        int count = 1;
        while(count < pos) {
            prev = curr;
            curr = curr->next;
            count += 1;
        }
        if(curr->next == NULL) {
            tail = prev;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void display(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    } 
}
int main() {
    Node* n1 = new Node(3);
    Node* head = n1;
    Node* tail = n1;

    insertAtTail(tail, 4);
    insertAtTail(tail, 5);
    insertAtAnyPosition(head, tail, 4, 22);
    display(head);

    cout << endl;
    deleteAtAnyPosition(head, tail, 2);
    display(head);
    return 0;
}