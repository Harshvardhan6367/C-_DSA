#include<iostream>
using namespace std;
bool checkPal(string s, int start, int end)
{
    if(start>=end)
        return 1;
    
    if(s[start]!=s[end])
        return 0;
    return checkPal(s, start+1, end-1);
}
int main()
{
    string str = "naman";
    int n = 5;
    cout<< checkPal(str, 0, n-1);
}