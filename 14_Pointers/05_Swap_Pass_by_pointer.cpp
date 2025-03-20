#include<iostream>
using namespace std;
void swapping(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1=*p2;
    *p2=temp;
}
int main()
{
    int first=19, second=34;
    swapping(&first,&second);
    cout<<first<< " "<<second;
    return 0;
}