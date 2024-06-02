/*
    Given a 2D matrix with m rows and n columns containing integers, find and print the
    maximum value present in the array.
*/
#include <iostream>
#include<climits>
using namespace std;

int main() {

    int m = 3;
    int n = 3;
    int mat[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int max = INT_MIN;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(mat[i][j] > max) {
                max = mat[i][j];
            }
        }
    }
    cout << max << endl;
    return 0;
}