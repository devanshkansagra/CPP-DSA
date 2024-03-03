#include<iostream>
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

void print(Node* &head) {
    
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void push(Node* &head,int data) {
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void top(Node* &head) {
    cout << head->data << endl;
}

void pop(Node* &head) {
    Node* temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
}
int main() {

    Node* n1 = new Node(3);
    print(n1);

    Node* head = n1;
    push(head, 4);
    print(head);
    push(head, 5);
    print(head);

    pop(head);
    print(head);
    push(head, 5);
    print(head);
    push(head, 6);
    print(head);
    pop(head);
    print(head);

    top(head);
    push(head, 7);
    top(head);
    return 0;
}