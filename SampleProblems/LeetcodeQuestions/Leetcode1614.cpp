/*
    Check the description at: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/
*/

#include<bits/stdc++.h>
using namespace std;

int maxDepth(string s) {

    int count = 0;
    int maxCount = 0;

    stack <char> st;

    int i = s.length();
    while(i--) {
        if(s[i] == '(') {
            st.push(s[i]);
        }
        while(st.top() == ')') {
            st.pop();
        }
    }

}
int main() {

    string s = "(1)+((2))+(((3)))";

    return 0;
}