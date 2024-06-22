// Check the description at: https://leetcode.com/problems/remove-outermost-parentheses/description/
#include <iostream>
#include <stack>
using namespace std;

string removeOuterParentheses(string s) {
    stack <char> st;
    string res = "";
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '(') {
            st.push(s[i]);
        }

        if(s[i] == ')' && st.top() == '(') {
            res += st.top() + s[i];
            st.pop();
        }
    }
    return res;
}
int main() {

    string s = "(()())";
    string result = removeOuterParentheses(s);
    cout << result << endl;
    return 0;
}