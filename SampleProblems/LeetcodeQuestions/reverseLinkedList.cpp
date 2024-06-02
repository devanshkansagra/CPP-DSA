#include <iostream>
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

Node* reverseLinkedList(Node* &head) {
    Node* temp = head;
    Node* head1 = NULL;
    while(temp != NULL) {
        insertAtHead(head1, temp->data);
        temp = temp->next;
    }   
    return head1;
}

int main() {

    Node* l1;
    Node* head = l1;
    Node* tail = l1;

    insertAtTail(head, tail, 1);
    insertAtTail(head, tail, 2);
    insertAtTail(head, tail, 3);
    insertAtTail(head, tail, 4);
    insertAtTail(head, tail, 5);

    print(head);

    Node* reverse = reverseLinkedList(head);
    Node* head1 = reverse;
    print(head1);
    return 0;
}