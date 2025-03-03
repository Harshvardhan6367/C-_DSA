#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int n = matrix.size();

    // Step 1: Transpose the Matrix
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step 2: Reverse Each Column (For 90° AntiClockwise Rotation)
    for (int j = 0; j < n; j++) {
        int start = 0, end = n - 1;
        while (start < end) {
            swap(matrix[start][j], matrix[end][j]);
            start++;
            end--;
        }
    }

    // Printing the rotated matrix
    cout << "Rotated Matrix:\n";
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
