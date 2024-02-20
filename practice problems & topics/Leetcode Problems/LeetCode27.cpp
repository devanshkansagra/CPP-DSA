#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    int index = 0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] != val){
                nums[index] = nums[i];
                index++;
            }
        }

    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    return 0;
}