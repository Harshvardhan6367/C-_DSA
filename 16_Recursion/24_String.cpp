#include<iostream>
#include<vector>
using namespace std;
void subset(string s,int index,int n,vector<string>&ans,string temp)
{
    if(index==n)
    {
        ans.push_back(temp);
        return;
    }
    // No case
    subset(s,index+1,n,ans,temp);

    //Yes case
    temp.push_back(s[index]);
    subset(s,index+1,n,ans,temp);
    temp.pop_back();
}
int main()
{
    string s = "abc";
    vector<string >ans;
    string temp;
    subset(s,0,s.size(),ans,temp);
    // cout<<ans.size();
    for(int i=0; i<ans.size(); i++)
    cout<<ans[i]<<endl;
}