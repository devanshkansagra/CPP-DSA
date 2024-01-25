/*
    Write a user defined function upper() which takes an integer square matrix as an input and
    its size N and prints the upper half of the matrix.

    Sample Input:arr[][]=[[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]] N=4
    Sample Output: 1    2   3   4
                        6   7   8
                            11  12
                                16
*/

#include <iostream>
#include <vector>
using namespace std;

void upper (vector <vector <int>> &mat) {
    
}
int main()
{
    
    int n = 4;
    vector <vector <int>> mat(n, vector <int> (n));
    mat = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    
    upper(mat);
    return 0;
}