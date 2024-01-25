#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector <int> nums;
    vector <int> ans;
    nums = {2, 5, 1, 3, 4, 7};
    int j = 3;
    for(int i = 0; i < 3; i++) {
        ans.push_back(nums[i]);
        ans.push_back(nums[j]);
        j += 1;

        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}