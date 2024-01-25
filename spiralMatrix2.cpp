#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int rows = 2;
    int cols = rows;
    int k = 1;

    vector<vector<int>> mat(rows, vector<int>(cols));

    int top = 0;
    int left = 0;
    int right = rows-1;
    int bottom = cols-1;
    int direction = 0;

    while (top <= bottom && left <= right)
    {
        if (direction == 0)
        {
            for (int j = left; j <= right; j++)
            {
                mat[top][j] = k;
                k += 1;
            }
            top += 1;
        }

        else if (direction == 1)
        {
            for (int i = top; i <= bottom; i++)
            {
                mat[i][right] = k;
                k += 1;
            }
            right -= 1;
        }

        else if (direction == 2)
        {
            for (int j = right; j >= left; j--)
            {
                mat[bottom][j] = k;
                k += 1;
            }
            bottom -= 1;
        }

        else
        {
            for (int i = bottom; i >= top; i--)
            {
                mat[i][left] = k;
                k += 1;
            }
            left += 1;
        }
        direction = (direction + 1) % 4;
    }

    for(int i = 0; i < mat.size(); i++) {
        for(int j = 0; j < mat.size(); j++) {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}