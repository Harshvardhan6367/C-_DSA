#include<iostream>
using namespace std;
void copy(char *str1, char *str2)
{
    while((*str1=*str2))
    {
        str1++,str2++;
    }
}
int main()
{
    char first[]="Mohit";
    char second[]="Rohit";

    copy(first,second);
    cout<<first;
    return 0;
}