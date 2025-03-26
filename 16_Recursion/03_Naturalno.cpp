#include<iostream>
using namespace std;
void print(int n,int num)
{
    if(n==num)
    {
        cout<<n;
        return;
    }
    cout<<n<<" ";
    print(n+1,num);
}
void print1(int n)
{
    if(n==1)
    {
        cout<<n<<" ";
        return;
    }
    print1(n-1);
    cout<<n<<" ";
}
int main()
{
    int n;
    cout<<"Enter n";
    cin>>n;

    print(1,n);
    cout<<endl;
    print1(n);
}