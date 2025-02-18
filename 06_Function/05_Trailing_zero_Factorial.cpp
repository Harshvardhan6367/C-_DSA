#include<iostream>
using namespace std;


int main()
{
    int num = 50;
    int ans = 0;
    while (num>=5)
    {
        ans = ans + num / 5;
        num/=5;
    }
    
    cout << ans;
    return 0;
}