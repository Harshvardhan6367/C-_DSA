#include<iostream>
#include<vector>
using namespace std;

int main() {
    string s = "AABBBCBBAC";
    vector<int> count(256, 0);
    int first = 0, second = 0, len = s.size(), diff = 0;

    // Calculate all unique characters
    while (first < s.size()) {
        if (count[s[first]] == 0)
            diff++;
        count[s[first]]++;
        first++;
    }

    // Reset the count array
    for (int i = 0; i < 256; i++)
        count[i] = 0;

    first = 0;
    diff = 0;  // Reinitialize diff to 0

    // Second pass to find the minimum window containing all unique characters
    while (second < s.size()) {
        if (diff < count.size() && second < s.size()) {
            if (count[s[second]] == 0)
                diff++;
            count[s[second]]++;
            second++;
        }

        // When all unique characters are in the window, try to minimize the window
        while (diff == count.size()) {
            len = min(len, second - first);
            count[s[first]]--;
            if (count[s[first]] == 0)
                diff--;
            first++;
        }
    }

    cout << len;
    return 0;
}