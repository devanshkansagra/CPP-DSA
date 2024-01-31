// Copy the values of one stack to another stack
#include<iostream>
#include<stack>
using namespace std;

stack <int> copy(stack <int> &s) {
    stack <int> temp;
    while(!s.empty()) {
        int top = s.top();
        s.pop();
        temp.push(top);
    }

    while(!temp.empty()) {
        int top = temp.top();
        temp.pop();
        s.push(top);
    }

    return s;
}
int main() {

    stack <int> st;
    int size = 5;
    for(int i = 1; i <= size; i++) {
        st.push(i);
    }

    stack <int> st2 = copy(st);

    cout << "Stack 1 data" << endl;
    for(int i = 1; i <= 5; i++) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl << "Stack 2 data" << endl;
    for(int i = 1; i <= 5; i++) {
        cout << st2.top() << " ";
        st2.pop();
    }
    return 0;
}