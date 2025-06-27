#include<iostream>
#include<stack>
using namespace std;
bool ValidPar(string str)
{
    stack<char> S;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='('||str[i]=='{'||str[i]=='[')
            S.push(str[i]);
        else
        {
            if(S.empty())
                return 0;
            else if(str[i]==')')
            {
                if(S.top()!='(')
                    return 0;
                else
                    S.pop();
            }
            else if(str[i]=='}')
            {
                if(S.top()!='{')
                    return 0;
                else
                    S.pop();
            }
            else
            {
                if(S.top()!='[')
                    return 0;
                else
                    S.pop();
            }
        }
    }
    return S.empty();
}
int main()
{
    string str = "(()){}[]";
    cout<<ValidPar(str)<<endl;         //0 --> Valid    ... 1  --> Not valid
}