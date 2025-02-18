#include<iostream>
#include<math.h>
using namespace std;
int countDigit(int n){
    int ans = 0;
    while(n){
        ans++;
        n /= 10;
    }
    return ans;
}
bool Armstrong(int num, int digit){
    int x = num;
    int ans = 0, rem;
    while(num){
        rem = num%10;
        num /=10; 
        ans = ans + pow(rem, digit);
    }
    if(ans == x)
        return 1;    //boolan true(1)
    else
        return 0;    //boolan false(0)
}
int main()
{
    int num;
    cin>> num;

    int digit = countDigit(num);

    cout << Armstrong(num, digit);
    return 0;
}