#include<bits/stdc++.h>
using namespace std;

vector <int> increasing(vector <int> nums) {
    stack <int> st;
    vector <int> result(nums.size());

    for(int i = 0; i < nums.size(); i++) {
        while(!st.empty() && st.top() < nums[i]) {
            st.pop();
        }
        if (!st.empty()) {
            result[i] = st.top();
        } else {
            result[i] = -1;
        }

        st.push(nums[i]);
    }

    return result;
}
int main() {

    vector <int> nums = {3, 1, 4, 1, 5, 9, 2, 6};
    vector <int> result = increasing(nums);
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}