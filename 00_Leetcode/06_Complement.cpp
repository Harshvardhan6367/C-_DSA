#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    if (n == 0) {
        cout << "1";  // Special case: 0's complement is 1.
        return 0;
    }

    int ans = 0, rem, mul = 1;

    while (n) {
        rem = n % 2;
        rem = rem ^ 1;  // Flip bit (0 → 1, 1 → 0)
        ans = ans + rem * mul;
        mul *= 2;
        n /= 2;
    }

    cout << ans;
    return 0;
}
