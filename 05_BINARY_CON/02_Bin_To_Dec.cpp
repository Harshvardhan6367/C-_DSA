#include<iostream>
using namespace std;
int main()
{
    int num ;
    cout<< " Enter a binary number :";
    cin>> num;
    int rem , ans = 0, mul = 1;
    while(num>0){
        // reminder
        rem = num % 10;

        // ans
        ans = rem * mul + ans;

        // qutoient
        num/=10;

        // mul
        mul*=2;

    }
    cout<< ans;
    

    return 0;
}