#include<iostream>
using namespace std;

int main(){
    int fib1, fib2, fibn, n;
    cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    } else if (n == 1) {
        cout << 1;
        return 0;
    }

    fib1 = 0;  // First Fibonacci number
    fib2 = 1;  // Second Fibonacci number

    for (int i = 2; i <= n; i++) {
        fibn = fib1 + fib2;
        fib1 = fib2;
        fib2 = fibn;
    }

    cout << fibn;
    return 0;
}