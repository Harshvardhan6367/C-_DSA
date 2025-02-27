#include <iostream>
#include <vector>
#include <climits>  // Include this for INT_MIN
using namespace std;

int main() {
    vector<int> arr = {3, 4, -5, 8, -12, 7, 6, -2};

    // Kadane's Algorithm
    int maxi = INT_MIN, prefix = 0;

    for (auto i = arr.begin(); i != arr.end(); i++) {
        prefix += *i;  // Corrected: Dereferencing the iterator
        maxi = max(prefix, maxi);

        if (prefix < 0)
            prefix = 0;
    }

    cout << "Maximum Subarray Sum: " << maxi << endl; // Output result
    return 0;
}
