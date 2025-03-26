#include<iostream>
using namespace std;
void GCD(int a, int b)
{
    if(b==0)
    {
        cout<<a;
        return;
    }
    GCD(b,a%b);
}
int main()
{
    int num1,num2;
    num1=18;
    num2=48;
    GCD(num1,num2);
}