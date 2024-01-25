/*
    Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array. Cracking the Coding Interview in C++ - Foundation
    For ex: arr[]={1,2,3,4,5} n=5
    Output: Odd Numbers =  3
            Even Numbers = 2
*/

#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int evenCount, oddCount;

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            evenCount += 1;
        }
        else {
            oddCount += 1;
        }
    } 

    cout << "Odd Numbers: " << oddCount << endl;
    cout << "Even Numbers: " << evenCount << endl;
    return 0;
}