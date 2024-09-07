// Find the missing number in array

#include <bits/stdc++.h>
using namespace std;

int missing(vector <int> &nums) {
    int N = nums.size();

    int s1 = (N * (N + 1)) / 2;
    int s2 = 0;

    for(int i = 0; i < nums.size(); i++) {
        s2 += nums[i];
    }

    return s1 - s2;
}
int main() {

    vector <int> nums = {0, 1};

    cout << missing(nums) << endl;
    return 0;
}