// Next Greater Element
#include<bits/stdc++.h>
using namespace std;

vector <int> nextGreaterElement(vector <int> &nums) {
    stack <int> st;
    vector <int> ans(nums.size(), -1);
    st.push(0);

    for(int i = 1; i < nums.size(); i++) {
        // check for next greater element
        while(!st.empty() && nums[i] > nums[st.top()]) {
            ans[st.top()] = nums[i];
            st.pop();
        }

        // if not next greater element found
        st.push(i);
    }
    return ans;
}

vector <int> nextSmallerElement(vector <int> &nums) {
    stack <int> st;
    vector <int> ans(nums.size(), -1);
    st.push(0);
    for(int i = 1; i < nums.size(); i++) {

        // check for next smaller element
        while(!st.empty() && nums[i] < nums[st.top()]) {
            ans[st.top()] = nums[i];
            st.pop();
        }

        // if not smaller element found
        st.push(i);
    }

    return ans;
}
int main() {

    vector <int> nums = {1, 2, 1, 3, 4, 2};
    vector <int> ans = nextGreaterElement(nums);
    vector <int> ans2 = nextSmallerElement(nums);

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < ans2.size(); i++) {
        cout << ans2[i] << " ";
    }
    cout << endl;
    return 0;
}