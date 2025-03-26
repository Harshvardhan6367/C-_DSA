#include<iostream>
using namespace std;
void printeven(int num, int n)
{
    if(num>n)
    return;

    cout<<num<<" ";
    printeven(num+2,n);
}
void printeven1(int n)
{
    if(n==2)
    {
        cout<<n<<" ";
        return;
    }
    printeven1(n-2);
    cout<<n<<" ";
}
int main()
{
    int n=11;
    printeven(2,11);
    cout<<endl;
    //
    if(n%2!=0)
    {
        n--;
    }
    printeven1(n);
}