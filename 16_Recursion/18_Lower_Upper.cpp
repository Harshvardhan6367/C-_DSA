#include<iostream>
using namespace std;
void lowtoupp(string & str, int index){
    if(index==-1)
        return;

    str[index] = 'A'+ str[index]-'a';
    lowtoupp(str,index-1);
}
int main()
{
    string s = "harsh";
    lowtoupp(s,4);
    cout<< s;
}