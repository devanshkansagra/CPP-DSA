/*
    Question: 
    Given an integer array arr, move all 0's to the end of it while maintaining
    the relative order of all non-zero elements

    Note that you must not do this in-place without making a copy of the array

    Input: 
    3 0 2 0 1 5

    Output:
    3 2 1 5 0 0
*/
#include<bits/stdc++.h>
using namespace std;

int main() {

    vector <int> arr = {3, 0, 2, 0, 1, 5};
    for(int i = 0; i < arr.size()-1; i++) {
        for(int j = i+1; j < arr.size(); j++) {
            if(arr[i] == 0 && arr[j] != 0) {
                swap(arr[i], arr[j]);
            }
        }
    }

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}