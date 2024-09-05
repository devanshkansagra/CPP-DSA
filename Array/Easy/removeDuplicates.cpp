// Remove duplicates from the sorted array

#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(vector <int> &nums) {
    stack <int> st;
    for(int i = 0; i < nums.size(); i++) {
       if(st.empty() || nums[i] != st.top()) {
        st.push(nums[i]);
       }
    }
    
    nums.clear();

    while(!st.empty()) {
        nums.insert(nums.begin(), st.top());
        st.pop();
    }
}
int main() {

    vector <int> v = {1, 1, 2};
    removeDuplicates(v);

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}