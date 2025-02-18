#include<iostream>
using namespace std;
int main()
{
    int x ;
    cout<< "Enter number : ";
    cin>> x;
    if(x<0)
        return 0;

        int num = x, rem, ans = 0;
        while(num!=0){
            rem = num % 10;
            num/=10;
            // if(ans> INT_MAX/10)
            // return 0;
            ans = ans*10 + rem;
        }
        if(ans == x)
        cout<<" Pallendrom number";
        else
        cout<< "NOT Pallendrom number";

}