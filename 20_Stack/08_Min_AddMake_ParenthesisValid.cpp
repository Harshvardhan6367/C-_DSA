#include<iostream>
#include<stack>
using namespace std;
int CountPar(string str)
{
    stack<char>S;
    int count=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='(')
        S.push(str[i]);
        else
        {
            if(S.empty())
            count++;
            else
            S.pop();
        }
    }
    return count+S.size();
}
int main()
{
    string str=")())()";
    
    cout<<CountPar(str);
}