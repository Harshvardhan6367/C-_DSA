#include<iostream>
using namespace std;
int fun(int n)
{
    if(n==0)
    {
        cout<<"Happy birthday";
        return 0;
    }
    cout<<n<<"day left for birthday"<<endl;
    fun(n-1);
}

int main()
{
    fun(5);
    return 0;
}