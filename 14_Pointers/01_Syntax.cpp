#include<iostream>
using namespace std;
int main()
{
    int a=10;
    char b='w';
    float x = 276.6;

    int *ptr = &a;
    char *ptr1= &b; 
    float *ptr2 = &x;

    cout<< ptr<<endl;    //Address of a
    cout<< *ptr<<endl;   // value inside a
    cout<< &a<<endl;
    cout<< a<<endl;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(ptr)<<endl<<endl;
    
    cout<<sizeof(b)<<endl;
    cout<<sizeof(ptr1)<<endl;
    cout<<sizeof(ptr2)<<endl<<endl;


    cout<<*ptr1<<endl;
    char c = 'u';
    ptr1 = &c;

    cout<<*ptr1<<endl;
    return 0;
}