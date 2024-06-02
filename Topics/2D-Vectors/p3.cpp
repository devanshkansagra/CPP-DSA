// Given a boolean 2D Array/Vector where each row is sorted find the rows with maximum number of 1's
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Approach 1
int maximumOnesRow(vector<vector<int>> &v)
{
    int columns = v[0].size();
    int maxOnes = INT_MIN;
    int maxOnesRow = -1;

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (v[i][j] == 1)
            {
                int ones = columns - j;
                if (ones > maxOnes)
                {
                    maxOnes = ones;
                    maxOnesRow = i;
                }
                break;
            }
        }
    }
    return maxOnesRow;
}

// Approach 2
int maximumOnesRow2(vector<vector<int>> &v)
{
    int maxOnesRow = -1;
    int leftMostOne = 0;
    int leftMostOneColIndex = 0;
    int nextMostLeftOne;
    int nextMostLeftOneIndex = -1;

    for (int i = 0; i < v.size(); i++)
    {
        if (i + 1 >= v.size())
        {
            break;
        }
        else
        {
            for (int j = v[i].size() - 1; j >= 0; j--)
            {
                int nextMostLeftOne = v[i + 1][j - 1];
                int nextMostLeftOneIndex = 0;
                if (v[i][j] == 1)
                {
                    leftMostOne = v[i][j];
                    leftMostOneColIndex = j;
                    if (nextMostLeftOne == 1)
                    {
                        nextMostLeftOne = leftMostOne;
                        nextMostLeftOneIndex = j - 1;
                        // maxOnesRow = nextMostLeftOneIndex;
                    }
                }
            }
        }
    }
    return nextMostLeftOneIndex;
}
int main()
{

    vector<vector<int>> nums = {{0, 1, 1, 1}, {1, 1, 1, 1}, {0, 0, 1, 1}};
    int maxOneRow = maximumOnesRow(nums);
    cout << maxOneRow << endl;

    int maxOneRow2 = maximumOnesRow2(nums);
    cout << maxOneRow2 << endl;
    cout << endl;
    return 0;
}