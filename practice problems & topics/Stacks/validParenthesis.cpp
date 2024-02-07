// Check whether the string of parenthesis is valid or not
// Ex: "()" -> true
// Ex: "()[]{}" -> true
// Ex: "(]" -> false

#include<iostream>
#include<stack>
using namespace std;

bool isValidParenthesis(string s) {
    stack <char> st;
    for(int i = 0; i < s.size(); i++) {
        char ch = s[i];
        if(ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        else {
            if(ch == ')' && !st.empty() && st.top() == '(') {
                st.pop();
            }
            else if(ch == '}' && !st.empty() && st.top() == '{') {
                st.pop();
            }
            else if(ch == ']' && !st.empty() && st.top() == '[') {
                st.pop();
            }
            else {
                return false;
            }
        }
    }
    return st.empty();
}
int main() {

    string st = ")(";
    cout << isValidParenthesis(st);
    return 0;
}