#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<" Enter no : ";
    cin>> num;
    int rem, ans = 0;
    while(num != 0){
        rem = num%10;
        // if (ans>INT_MAX/10 || ans< INT_MIN/10)        ---> prevent from OVERFLOW.
        // {
        //     return 0;
        // }
        
        ans = ans* 10 + rem;
        num/=10;
    }
    cout << ans;
    return 0;
}