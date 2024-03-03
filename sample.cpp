#include <iostream>
using namespace std;
class Node {
    public:
        int data;
        Node* next;

        Node(int data) {
            this->data = data;
            this->next = NULL ;
        }
};

int search(Node* &head, int data) {
    int count = 1;
    while(head->data != data) {
        head = head->next;
        count += 1;
    }
    return count;
}

void InsertAtTail(Node* &tail, int data) {
    Node* temp = new Node(data);
    tail->next = temp;
    tail = tail->next; 
}

int main() {

    Node* n1 = new Node(3);
    Node* tail = n1;
    for(int i = 4; i <= 10; i++) {
        InsertAtTail(tail, i);
    }

    int positionEle = search(n1, 7);
    cout << positionEle << endl;
    return 0;
}