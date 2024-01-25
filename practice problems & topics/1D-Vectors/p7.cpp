/*
    ​Given an integer array arr consisting of 0’s and 1’s only, return the max length of
    sequence which contains equal numbers of 0 and 1.

    Input: arr = [0, 1, 0, 1]
    Output: 4
    Explanation: THe longest sequence is 0, 1, 0, 1

    Input arr = [0, 1, 1, 0, 1, 1, 1]
    Output: 4
    Explanation: THe longest sequence is 0, 1, 1, 0
*/
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> arr;
    arr = {0, 1, 1, 0, 1, 1, 1, 0};
    // int countZero = 0;
    // int countOne = 0;
    // int maxLength = 0;
    // for(int i = 0; i < arr.size(); i++) {
    //     if(arr[i] == 0) {
    //         countZero += 1;
    //     }
    //     else {
    //         countOne += 1;
    //     }
    // }
    // cout << countZero << " " << countOne << endl;
    // maxLength = countZero + countOne;
    // cout << maxLength - countOne + countZero<< endl;
    // return 0;
    return 0;
}