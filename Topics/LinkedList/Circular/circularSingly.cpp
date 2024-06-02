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

        ~Node() {
            if(this->next != NULL) {
                this->next = NULL;
                delete next;
            }
        }
};

void insertNode(Node* &tail, int element, int data) {
    if(tail == NULL) {
        Node* newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }
    else {
        Node* curr = tail;
        while(curr->data != element) {
            curr = curr->next;
        }

        Node* temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node* &tail, int data) {
    Node* prev = tail;
    Node* curr = prev->next;

    while(curr->data != data) {
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;

    if(tail == curr) {
        tail = prev;
    }
    curr->next = NULL;
    delete curr;
}

void print(Node* &tail) {
    Node* temp = tail;
    do {
        cout << tail->data << " ";
        tail = tail->next;
    }while(tail != temp);
    cout << endl;
}
int main() {

    Node* tail = NULL;
    insertNode(tail, 0, 1);
    print(tail);

    insertNode(tail, 1, 2);
    print(tail);

    insertNode(tail, 2, 3);
    print(tail);

    insertNode(tail, 3, 4);
    print(tail);

    deleteNode(tail, 2);
    print(tail);
    return 0;
}