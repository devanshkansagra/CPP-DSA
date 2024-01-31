// Remove Element at the bottom of the stack
#include<iostream>
#include<stack>
using namespace std;

void RemoveElementBottom(stack <int> &s, int &size) {
    stack <int> temp;
    while(!s.empty()) {
        int top = s.top();
        s.pop();
        temp.push(top);
    }

    temp.pop();
    size--;

    while(!temp.empty()) {
        int top = temp.top();
        temp.pop();
        s.push(top);
    }

    return;
}
int main() {

    stack <int> s;
    int size = 4;
    for(int i = 1; i <= size; i++) {
        s.push(i);
    }

    RemoveElementBottom(s, size);

    for(int i = 1; i <= size; i++) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}