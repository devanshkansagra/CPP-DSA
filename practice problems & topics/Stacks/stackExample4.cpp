#include<iostream>
#include<stack>

using namespace std;

stack <int> ReverseStack(stack <int> &s) {
    stack <int> temp;
    while(!s.empty()) {
        int top = s.top();
        s.pop();
        temp.push(top);
    }

    return temp;
}
int main() {
    stack <int> s;
    stack <int> temp;
    cout << "Original Stack" << endl;
    for(int i = 1; i <= 5; i++) {
        s.push(i);
    }
    temp = s;
    for(int i = 1; i <= 5; i++) {
        cout << temp.top() << endl;
        temp.pop();
    }
    cout << endl << "Reversed stack" << endl;
    s = ReverseStack(s);
    for(int i = 1; i <= 5; i++) {
        cout << s.top() << endl;
        s.pop();
    }
}