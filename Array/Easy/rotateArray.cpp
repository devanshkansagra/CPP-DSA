// Rotate array left or right by k

#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k, string dir) {
    int n = nums.size();
    if(dir == "right") {
        while(k > 0) {
            int ele = nums[nums.size()-1];
            nums.pop_back();
            nums.insert(nums.begin(),ele);
            k -= 1;
        }
    }
    else if (dir == "left") {
        while(k > 0) {
            int ele = nums[0];
            nums.erase(nums.begin());
            nums.push_back(ele);
            k -= 1;
        }
    }
}
int main() {

    vector <int> v = {3,7,8,9,10,11};
    string dir = "left";
    int k = 3;
    rotate(v, k, dir);
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}