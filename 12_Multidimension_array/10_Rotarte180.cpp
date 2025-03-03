#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int n = matrix.size(); // Number of rows
    int m = matrix[0].size(); // Number of columns

    // Column reverse
    for (int j = 0; j < m; j++) {
        int start = 0, end = n - 1;
        while (start < end) {
            swap(matrix[start][j], matrix[end][j]);
            start++, end--;
        }
    }

    // Row reverse
    for (int i = 0; i < n; i++) {
        int start = 0, end = m - 1;
        while (start < end) {
            swap(matrix[i][start], matrix[i][end]);
            start++, end--;
        }
    }

    // Print the final matrix
    cout << "Transformed Matrix:\n";
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
