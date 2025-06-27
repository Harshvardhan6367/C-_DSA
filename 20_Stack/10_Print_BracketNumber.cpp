#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main()
{
    string str= "(aa(bde))p(sd)";
    int count=0;
    vector<int>ans;
    stack<int>st;

    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='(')
        {
            count++;
            st.push(count);
            ans.push_back(count);
        }
        else if(str[i]==')')
        {
           ans.push_back(st.top());
           st.pop();
        }
    }

    for (int i=0;i<ans.size();i++) {
        cout << ans[i]<<" ";
    }
}