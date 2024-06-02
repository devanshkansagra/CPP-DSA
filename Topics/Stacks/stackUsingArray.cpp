#include<iostream>
using namespace std;

class Stack {
    int *arr;
    int size;
    int topIdx;

    public:
        Stack(int s) {
            size = s;
            arr = new int[size];
            topIdx = -1;
        }

        void display() {
            for(int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }

        void push(int x) {
            if(topIdx == size-1) {
                cout << "Stack overflow" << endl;
                return;
            }
            topIdx += 1;
            arr[topIdx] = x;
        }

        int pop() {
            if(topIdx == -1) {
                cout << "Stack underflow" << endl;
            }
            int temp = arr[topIdx];
            arr[topIdx] = (int) NULL;
            topIdx -= 1;

            return temp;

        }

        int top() {
            if(topIdx == -1) {
                cout << "Stack underflow" << endl;
            }
            return arr[topIdx];
        }

        bool isFull() {
            if(topIdx == size-1) {
                cout << "True" << endl;
                return true;
            }
            else {
                cout << "False" << endl;
                return false;
            }
        }

        bool isEmpty() {
            if(topIdx == -1) {
                cout << "True" << endl;
                return true;
            }
            else {
                cout << "False" << endl;
                return false;
            }
        }

};
int main() {

    Stack s(5);

    // Inputs the data to the stack
    for(int i = 1; i <= 5; i++ ){
        s.push(i);
    }

    // Display the stack elements;
    s.display();

    // Checks if the stack is full or not
    s.isFull();

    // Gets the top element
    int top = s.top();
    cout << top << endl;
    // Remove the last Element
    int popped = s.pop();
    s.display();
    cout << popped << endl;

    // Checks if the stack is full or not after removal
    s.isFull();

    // Removing the elements
    for(int i = 1; i <= 5; i++){
        s.pop();
    }

    // Checks for the empty stack
    s.isEmpty();
    return 0;
}