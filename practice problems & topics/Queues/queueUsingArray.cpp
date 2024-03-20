#include<bits/stdc++.h>
using namespace std;

class Queue {
    int *arr;
    int size;
    int front;
    int rear;

    public:
        Queue() {
            size = 100000;
            arr = new int[size];
            front = 0;
            rear = front;
        }

        void push(int n) {
            if(rear == size) {
                cout << "Queue is full" << endl;
            }
            else {
                arr[rear] = n;
                rear += 1;
            }
        }

        int pop() {

            int ans = arr[front];
            arr[front] = (int) NULL;
            front += 1;
            if(front == rear) {
                front = 0;
                rear = 0;

                cout << "Queue is empty" << endl;
            }

            return ans;
        }

        int frontEle() {
            return arr[front];
        }

        int back() {
            return arr[rear-1];
        }

        int Size() {
            int count = 0;
            for(int i = front; i < rear; i++) {
                count += 1;
            }
            return count;
        }

        void display() {
            while(front != rear) {
                cout << frontEle() << " ";
                front += 1;
            }
        }
};
int main() {

    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    // Display size
    cout << "Size of queue: " << q.Size() << endl;

    // Display Front Element
    cout << "Front element: " << q.frontEle() << endl;

    // Display Back element
    cout << "Back Element: " << q.back() << endl;

    // Pop the element
    cout << endl << "After Popping" << endl;
    q.pop();
    cout << "Front element: " << q.frontEle() << endl;
    cout << "Back Element: " << q.back() << endl;
    cout << "Size of queue: " << q.Size() << endl;

    // Insert a new Element
    q.push(5);
    cout << endl << "After pushing again" << endl;
    cout << "Front element: " << q.frontEle() << endl;
    cout << "Back Element: " << q.back() << endl;
    cout << "Size of queue: " << q.Size() << endl;


    // Display Element
    q.display();
    return 0;
}