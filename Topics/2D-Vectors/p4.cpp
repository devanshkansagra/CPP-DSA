#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{

    vector<vector<int>> nums = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 2;
    for (int i = 0; i < nums.size(); i++)
    {
        if(i+1 >= nums.size()) {
            break;
        }
        int maxVal = max(nums[i][k], nums[i+1][k]);
        
    }

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums[i].size(); j++)
        {
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}