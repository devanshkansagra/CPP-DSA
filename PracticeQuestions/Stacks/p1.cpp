// Check whether the given string of parenthesis is balanced or not?

// Check whether the given string of parenthesis is balanced or not?

#include<bits/stdc++.h>
using namespace std;

int main() {

    string s = "[[{(()()[][])}]]";
    stack <char> st;

    int length = s.length();
    int i = 0;
    while(i < length) {
        if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
            st.push(s[i]);
        }
        else if(s[i] == ']' && st.top() == '[' && !st.empty()) st.pop();
        else if(s[i] == '}' && st.top() == '{' && !st.empty()) st.pop();
        else if(s[i] == ')' && st.top() == '(' && !st.empty()) st.pop();
        else st.push(s[i]);
        i += 1;
    }

    if(st.empty()) {
        cout << "Balanced" << endl;
    }
    else {
        cout << "Not balanced" << endl;
    }
    return 0;
}