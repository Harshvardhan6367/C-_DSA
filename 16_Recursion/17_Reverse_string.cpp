#include<iostream>
using namespace std;
void rev(string &s, int start, int end){
    if(start>=end)
        return ;
    char ch = s[start];
    s[start] = s[end];
    s[end] = ch;

    rev(s, start+1, end-1);
}
int main()
{
    string s= "Harsh";
    cout<< s<<endl;
    rev(s,0,4);
    cout<< s<<endl;
}