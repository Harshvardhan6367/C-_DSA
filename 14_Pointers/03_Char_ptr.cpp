#include<iostream>
using namespace std;
int main()
{
    char mi[5]= "1234";
    char* ptr = mi;

    cout<<mi<<endl;
    cout<<ptr<<endl;

    cout<<(void*)mi<<endl;
    cout<<(void*)ptr<<endl;
    cout<<static_cast<void*>(mi)<<endl<<endl;
    

    char ch='w';
    char *ptr1 = &ch;

    cout<<(void*)&ch<<endl;
    cout<<(void*)ptr1<<endl;
}