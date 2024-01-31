#include<iostream>
#include<stack>
using namespace std;

int main() {

    int size = 5;
    stack <int> st;
    for(int i = 0; i < size; i++) {
        st.push(i+1);
        cout << st.top() << " ";
    }
    cout << endl << st.top();
    cout << endl;
    st.pop();

    cout << st.top() << endl;

    cout << st.empty() << endl;
    return 0;
}