#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int nchoc(int A, int* B, int n2) {
    // Max Heap
    priority_queue<int> p;
    
    for (int i = 0; i < n2; i++)
        p.push(B[i]);
        
    long long MaxChoc = 0;
    const int MOD = 1000000007;
    
    while (A && !p.empty()) {
        int top = p.top();
        p.pop();
        
        MaxChoc += top;
        MaxChoc %= MOD;
        
        if (top / 2)
            p.push(top / 2);
        
        A--;
    }
    
    return MaxChoc % MOD;
}

int main() {
    int A = 3;
    int B[] = {6, 5};
    int n2 = sizeof(B) / sizeof(B[0]);
    
    cout << nchoc(A, B, n2) << endl;  // Output: 14
}
