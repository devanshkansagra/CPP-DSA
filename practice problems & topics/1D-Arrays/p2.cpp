/*
    Given an integer array and its size, find the sum of the greatest and the smallest integer present
    in the array. Here 1< size <101.

    For ex: arr[]={1,2,3,4,5} n=5
    Output: 6
*/

#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    int max = arr[0], min = arr[0], sum = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    sum = max + min;
    cout << sum << endl;
    return 0;
}