#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int data) {
            this->data = data;
            this->next = NULL ;
        }

        ~Node() {
            int value = this->data;
            cout << "Value deleted is : " << value << endl;
        }
};

void InsertAtHead(Node* &head, int data) {
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node* &tail, int data) {
    Node* temp = new Node(data);
    tail->next = temp;
    tail = tail->next; 
}

void InsertAtMiddle(Node* &Prev, Node* &New, int data) {
    Node* temp = new Node(data);
    temp->next = New;
    Prev->next = temp;

}

void InsertAtAnyPosition(Node* &head, int position, int data) {

    if(position == 1) {
        InsertAtHead(head, data);
        return;
    }

    int count = 1;
    Node* temp = head;

    while(count < position-1) {
        temp = temp->next;
        count += 1;
    }

    if(position-1 > count) {
        InsertAtTail(temp, data);
        return;
    }

    Node* node = new Node(data);
    node->next = temp->next;
    temp->next = node; 
}

void deleteAtAnyPosition(int position, Node* &head) {
    if(position == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    else {
        int count = 1;
        Node* curr = head;
        Node* prev = NULL;

        while(count < position) {
            prev = curr;
            curr = curr->next;
            count += 1;
        }

        prev->next = curr->next;
        delete curr;
    }
}

void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl; 
}

int main() {

    Node* n1 = new Node(3);
    Node* head = n1;    
    Node* tail = n1;

    // Head Insertion
    cout << "Insert at head" <<endl;
    print(head);
    InsertAtHead(head, 4);
    print(head);
    InsertAtHead(head, 5);
    print(head);
    cout << endl;

    // Tail insertion
    cout << "Insert at tail" << endl;
    print(tail);
    InsertAtTail(n1, 6);
    print(tail);
    InsertAtTail(n1, 7);
    print(tail);
    cout << endl;

    // Insert at middle
    Node* prev = new Node(7);
    Node* next = new Node(10);
    head = prev;
    cout << "Insert at middle of the node" << endl;
    InsertAtMiddle(prev, next, 8);
    print(head);

    // Insert at any position
    cout << "Insert at any position: " << endl;
    InsertAtAnyPosition(head, 3, 9);
    print(head);
    InsertAtAnyPosition(head, 1, 6);
    print(head);
    InsertAtAnyPosition(head, 6, 11);
    print(head);


    // Delete a Node from linked list
    deleteAtAnyPosition(6, head);
    print(head);

    return 0;
}