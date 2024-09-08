#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
    int xorr = 0;
    for(int i = 0; i < nums.size(); i++) {
        xorr ^= nums[i];
    }

    return xorr;
}

int main() {
    vector <int> nums = {1, 4, 1, 2, 2, 1};
    int single = singleNumber(nums);
    cout << single << endl;

    return 0;
}