/*
    Given a 2D matrix with m rows and n columns containing integers. Print and return the row
    number with maximum sum in the array.
*/
#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main() {

    vector <vector <int>> mat = {{1,2,3}, {1,3,2}, {2,1,3}};
    int sum = 0;
    int row = 0;
    int max = INT_MIN;

    for(int i = 0; i < mat.size(); i++) {
        for(int j = 0; j < mat[i].size(); j++) {
            sum += mat[i][j];
        }
        if(sum > max) {
            max = sum;
            row = i;
        }
        sum = 0;
    }
    cout << row + 1;
    cout << endl;
    return 0;
}