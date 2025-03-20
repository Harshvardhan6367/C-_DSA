#include<iostream>
using namespace std;
int main()
{
    // Heap memory allocation
    int *ptr = new int;
    *ptr = 5;            // assign value
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    int n;
    cout<<"Enter size of array";
    cin>>n;

    int *p = new int[n];

    //
    for(int i=0;i<n;i++)
        p[i]=i+1;

    for(int i=0;i<n;i++)
        cout<<p[i]<<endl;
    

    //release heap memory
    delete ptr;
    delete[] p;
}