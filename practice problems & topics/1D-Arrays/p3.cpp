/*
    Given an integer array and its size, reverse the array and print it . Here 1<size<101
    For ex:  arr[]={1,2,3,4,5} n=5
    Output:  5,4,3,2,1
*/

#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    for(int i = 0; i < n; i++) {

        int firstDigit = arr[i];
        int lastDigit = arr[(n-1) - i];
        firstDigit = lastDigit;
        cout << firstDigit << " ";
        
    }
    cout << endl;
    return 0;
}