#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int x) {
    int row = matrix.size(), col = matrix[0].size();
    int i = 0, j = col - 1;

    while (i < row && j >= 0) {  
        if (matrix[i][j] == x)
            return true;  
        else if (matrix[i][j] < x)
            i++;
        else
            j--;
    }
    return false;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}
    };

    int x = 8; // Element to search

    if (searchMatrix(matrix, x))
        cout << "Element found!" << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}
