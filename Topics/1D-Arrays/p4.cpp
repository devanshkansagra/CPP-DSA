/*
    Given two arrays a[] and b[] of same size.Your task is to find the minimum sum of two elements such
    that they belong to different arrays and are not at the same index. Here 1<size<101

    For ex: a[]={5,6,10,4,9}
            b[]={1,2,3,4,5}
    Output: 5
*/

#include <iostream>
#include<climits>
using namespace std;

int main() {

    int a[]={1,6,10,4,9};
    int b[]={1,2,3,4,5};

    int size = 5;

    int indexA, indexB;

    int minSum = 0;
    int minA = INT_MAX;
    int minB = INT_MAX;
    int min2A = INT_MAX;
    int min2B = INT_MAX;


    for(int i = 0; i < size; i++) {
        if(a[i] < minA) {
            min2A = minA;
            minA = a[i];
            indexA = i;
        }
        else if(a[i] < min2A) {
            min2A = a[i];
        }
        if(b[i] < minB) {
            minB = b[i];
            indexB = i;
        }
        else if(b[i] < min2B) {
            min2B = b[i];
        }
    }

    if(indexA != indexB) {
        minSum = minA + minB;
        cout << minSum << endl;
    }
    else {
        cout << min(min2A + minB, min2B + minA) << endl;
    }
    return 0;
}