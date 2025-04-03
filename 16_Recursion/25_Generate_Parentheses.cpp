#include<iostream>
#include<vector>
using namespace std;
void Parentheses(int n, int left, int right,vector<string>&ans, string &temp)
{
    if(left+right==2*n)
    {
        ans.push_back(temp);
        return;
    }
    // Left parentheses
    if(left<n)
    {
        temp.push_back('(');
        Parentheses(n,left+1,right,ans,temp);
        temp.pop_back();
    }
    // Right parentheses
    if(right<left)
    {
        temp.push_back(')');
        Parentheses(n,left,right+1,ans,temp);
        temp.pop_back();
    }
}
int main()
{
    int n=3, left=0, right=0;
    vector<string> ans;
    string temp;

    Parentheses(n,left,right,ans,temp);
    for (int i = 0; i < ans.size(); i++)
    cout<<ans[i]<<endl;
    
    
}