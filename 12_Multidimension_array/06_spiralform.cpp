#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {
        {1,  2,  3,  4,  5,  6},
        {7,  8,  9, 10, 11, 12},
        {13, 14, 15, 16, 17, 18},
        {19, 20, 21, 22, 23, 24},
        {25, 26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35, 36}
    };

    vector<int> ans;
    int row = matrix.size(), col = matrix[0].size();
    int top = 0, right = col - 1, bottom = row - 1, left = 0;

    while (left <= right && top <= bottom)
    {
        // Print Top Row
        for (int j = left; j <= right; j++)
            ans.push_back(matrix[top][j]);
        top++;

        // Print Right Column
        for (int i = top; i <= bottom; i++)
            ans.push_back(matrix[i][right]);
        right--;

        // Print Bottom Row
        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
                ans.push_back(matrix[bottom][j]);
            bottom--;
        }

        // Print Left Column
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
                ans.push_back(matrix[i][left]);
            left++;
        }
    }

    // Print the result
    for (int num : ans) {
        cout << num << " ";
    }

    return 0;
}
