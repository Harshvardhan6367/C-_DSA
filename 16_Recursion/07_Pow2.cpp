#include<iostream>
using namespace std;
int Pow(int n)
{
    if(n==0)
    {
        return 1;
    }
    return 2*Pow(n-1);
}
int main()
{
    int n;
    n=4;
    cout<<Pow(n);
}