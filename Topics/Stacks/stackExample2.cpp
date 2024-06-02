// Insert element at the bottom of the stack
#include<iostream>
#include<stack>
using namespace std;

void InsertElementBottom(stack <int> &s,int n, int &size) {
    stack <int> temp;
    while(!s.empty()) {
        int top = s.top();
        s.pop();
        temp.push(top);
    }

    s.push(n);
    size++;

    while(!temp.empty()) {
        int top = temp.top();
        temp.pop();
        s.push(top);
    }

    return;
}
int main() {

    stack <int> s;
    int size = 5;
    for(int i = 1; i <= size; i++) {
        s.push(i);
    }

    InsertElementBottom(s, 10, size);

    for(int i = 1; i <= size; i++) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}