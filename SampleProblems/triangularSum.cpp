/*
    You are given a 0-indexed integer array nums, where nums[i] is a digit between 0 and 9 (inclusive).

    The triangular sum of nums is the value of the only element present in nums after the following process terminates:

    1) Let nums comprise of n elements. If n == 1, end the process. Otherwise, create a new 0-indexed integer array newNums of length n - 1.
    2) For each index i, where 0 <= i < n - 1, assign the value of newNums[i] as (nums[i] + nums[i+1]) % 10, where % denotes modulo operator.
    3) Replace the array nums with newNums.
    4) Repeat the entire process starting from step 1.
    5) Return the triangular sum of nums.
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> nums = {2, 6, 6, 5, 5, 3, 3, 8, 6, 4, 3, 3, 5, 1, 0, 1, 3, 6, 9};

    int n = nums.size();
    while (n != 1)
    {
        for (int i = 0; i < n - 1; i++)
        {
            nums[i] = (nums[i] + nums[i + 1]) % 10;
        }
        n -= 1;
    }
    cout << nums[0];
    cout << endl;
    return 0;
}