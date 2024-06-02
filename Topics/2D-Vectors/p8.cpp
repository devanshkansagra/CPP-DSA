// Given a matrix arr[][] of integers, print the prefix sum matrix for it.
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector <vector <int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for(int i = 0; i < mat.size(); i++) {
        for(int j = 1; j < mat[i].size(); j++) {
            mat[i][j] += mat[i][j+1];
        }
    }

    for(int i = 0; i < mat.size(); i++) {
        for(int j = 0; j < mat[i].size(); j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}