#include<iostream>
using namespace std;
int sumSqr(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*n + sumSqr(n-1);
}
int main()
{
    int n;
    n=5;
    cout<<sumSqr(n);
}