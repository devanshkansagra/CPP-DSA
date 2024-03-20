#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* prev;
        Node* next;

        Node(int data) {
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
        }

        ~Node() {
            if(this->next == NULL) {
                delete next;
                this->next = NULL;
            }
            if(this->prev == NULL) {
                delete prev;
                this->prev = NULL;
            }
        }
};

void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void getLength(Node* &head) {
    Node* temp = head;
    int count = 0;
    while(temp != NULL) {
        count += 1;
        temp = temp->next;
    }
    cout << count << endl;
}

void insertAtHead(Node* &head, int data) {
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node* &tail, int data) {
    Node* temp = new Node(data);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int pos, int data) {
    if(pos == 1) {
        insertAtHead(head, data);
        return;
    } 
    Node* temp = head;
    int count = 1;
    while(count < pos - 1) {
        temp = temp->next;
        count += 1;
    }

    if(temp->next == NULL)  {
        insertAtTail(tail, data);
        return;
    }

    Node* n = new Node(data);
    n->next = temp->next;
    temp->next->prev = n;
    temp->next = n;
    n->prev = temp;
}

void deleteAtHead(Node* &head) {
    Node* start = head;
    head = head->next;
    head->prev = NULL;
    start->next = NULL;
    start->prev = NULL;
    delete start;
}

void deleteAtTail(Node* &tail) {
    Node* end = tail;
    tail = tail->prev;
    tail->next = NULL;
    end->next = NULL;
    end->prev = NULL;
    delete end;
}

void deleteAtPosition(Node* &head, Node* &tail, int pos) {
    if(pos == 1) {
        deleteAtHead(head);
        return;
    }
    int count = 1;
    Node* temp = head;
    Node* Prev = NULL;
    while(count < pos) {
        Prev = temp;
        temp = temp->next;
        count += 1;
    }

    if(temp->next == NULL) {
        deleteAtTail(tail);
        return;
    }

    Node* n = temp;
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    n->next = NULL;
    n->prev = NULL;
    delete n;

}

int main() {

    Node* n1 = new Node(3);
    Node* head = n1;
    Node* tail = n1;
    print(head);
    getLength(head);

    insertAtHead(head, 2);
    print(head);

    insertAtTail(tail, 4);
    print(head);

    insertAtPosition(head, tail, 4, 5);
    print(head);

    insertAtPosition(head, tail, 5, 6);
    print(head);

    deleteAtHead(head);
    print(head);

    deleteAtTail(tail);
    print(head);

    deleteAtPosition(head, tail, 2);
    print(head);
    return 0;
}