#include<iostream>
using namespace std;

void incr(int n)
{
    n++;
}
void incrRef(int *ptr)
{
    *ptr = *ptr +1;
}

int main()
{
    int num=10;
    incr(num);
    cout<<num<<endl;

    incrRef(&num);
    cout<<num;
    return 0;
}