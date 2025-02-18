#include<iostream>
using namespace std;
int main()
{
    int num ;
    cout <<"Enter number :";
    cin >> num;
    int ans= 0, rem, mul = 1;
    while(num>0){
        // reminder
        rem = num % 2;                              //(also use) rem = num & 1; ----> bitwise operation(&) -> give last binary digit.

        // ans
        ans+= rem*mul;                             // (also write) num = num>>1; ---> left shift           //ans = rem * mul + ans;

        // qutoient
        num/=2;                                    // num = num /2;

        // mul
        mul*=10;                                   // mul = mul * 10;

    }
    cout<< ans ;
    return 0;
}