/*
    Given a m*n matrix, Write a function which returns true if the matrix is a perfect matrix. A matrix is
    called perfect if every diagonal from top-left to bottom-right has the same elements.
*/

#include <iostream>
#include <vector>
using namespace std;

bool check(vector<vector<int>> &mat)
{
    int r = mat.size();
    int c = mat[0].size();
    for (int i = 1; i < r; i++)
    {
        for (int j = 1; j < c; j++)
        {
            if (mat[i][j] != mat[i - 1][j - 1])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{

    vector<vector<int>> mat = {{9, 8, 7}, {5, 9, 8}, {1, 5, 9}};
    if (check(mat))
    {
        cout << true << endl;
    }
    else
    {
        cout << false << endl;
    }
    return 0;
}