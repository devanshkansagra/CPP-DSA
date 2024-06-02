/*
    Given an integer array arr, return an array ans such that ans[i] is equal to the product of
    all the elements of arr except arr[i].

    Input: arr = [1, 3, 5, 7]
    Output: [105, 35, 21, 15]
    Explanation: ans = [3*5*7, 1*5*7, 1*3*7, 1*3*5]
*/

#include <iostream>
using namespace std;

int main() {

    // Approach 1 (O(n^2))
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans[n];

    int key = 0;
    int k, i;
    for(i = 0; i < n; i++) {
        key = arr[i];
        int product = 1;
        for(k = 0; k < n; k++) {
            if(i == k) {
                arr[k] = 1;
            }
            product *= arr[k];
        }
        ans[i] = product;
        cout << ans[i] << " ";
        arr[i] = key;
    }
    cout << endl;

    // Approach 2 (O(n))
    return 0;
}