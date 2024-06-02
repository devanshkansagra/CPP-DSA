#include <iostream>
#include<climits>
#include <vector>
using namespace std;

int main()
{
    vector <int> nums;
    nums = {2, 7, 11, 15};
    int target = 9;

    vector <int> ans(2);
    int i = 0;
    int j = i+1;
    for(i = 0; i < nums.size(); i++) {
        if(nums[i] + nums[j] == target) {
            ans[0] = i;
            ans[1] = j;
        }
        j += 1;
    }

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}