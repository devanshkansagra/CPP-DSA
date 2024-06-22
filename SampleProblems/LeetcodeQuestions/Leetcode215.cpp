#include<bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    int lastEle = nums[nums.size()-1];
    int num;
    int count = 0;
    int i = nums.size()-1;
    while(count != k) {
        num = nums[i];
        i -= 1;
        count += 1;
    }

    return num;
}
int main() {
    vector <int> nums = {3,2,3,1,2,4,5,5,6};
    int k = 4;

    int kLargest = findKthLargest(nums, k);
    cout << kLargest << endl;
}