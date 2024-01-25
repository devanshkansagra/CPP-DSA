/*
    Given an array containing n distinct integers in the range [0,n] (inclusive of both 0 and n)  (inclusive of
    both 0 and n). Find and return the only number of the range that is not present in the array. Here 1<n<101.

    Ex: arr=[3,0,1] 
    Output: 2
    n=3, thus the range will be [0,3]
    Ex: arr=[8,6,4,2,3,5,0,1]
    Output: 7
    n=8, thus the range will be [0,8]

    inclusive means included

*/

#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);   // Gives the size of the array
    int total = n * (n + 1) / 2;    // Gives the total sum of the element from the min range to the max range
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];  // sum of all the elements in the array
    }
    cout << "Missing is: " << total - sum << endl;  // from here we get the missing element
    return 0;
}