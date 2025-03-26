#include<iostream>
using namespace std;
int climbStairs(int n) {
    if(n<=1)
    return 1;
    else if(n==2)
    return 2;

    return climbStairs(n-1)+climbStairs(n-2);
}
int main()
{
    cout<<climbStairs(5);

}

// by Iteration methord
// int TW[100];
        
// TW[0] = 1;
// TW[1] = 1;

// for(int i=2;i<=n;i++)
// {
// TW[i]=TW[i-1]+TW[i-2];
// }

// return TW[n];