#include<bits/stdc++.h>
using namespace std;

class Queue {
    int *arr;
    int size;
    int front;
    int rear;

    public:
        Queue(int size) {
            arr = new int[size];
            front = 0;
            rear = front;
            this->size = size;
        }

        void push(int data) {
            if(rear == size) {
                cout << "Queue is full" << endl;
            }
            arr[rear] = data;
            rear += 1;
        }

        void pop() {
            if(front == rear) {
                cout << "Queue is empty" << endl;
            }
            arr[front] = (int) NULL;
            front += 1;
        }

        void push_front(int data) {
            if(front == 0 && rear == size) {
                cout << "Queue is full" << endl;
            }
            else {
                front -= 1;
                arr[front] = data;
            }
        }

        void pop_back() {
            if(front == rear) {
                cout << "Queue is empty";
            }
            else {
                rear -= 1;
                arr[rear] = (int) NULL;
            }
        }

        int frontEle() {
            return arr[front];
        }

        void print() {
            int i = front;
            while(i != rear) {
                cout << arr[i] << " ";
                i += 1;
            }
            cout << endl;
        }
};
int main() {

    Queue q(4);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.print();

    q.pop();
    q.print();

    q.push_front(1);
    q.print();

    q.pop_back();
    q.print();
    return 0;
}