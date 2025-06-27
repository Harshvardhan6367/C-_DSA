#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main()
{
    int arr[] = {8,6,4,7,4,9,10,8,12};
    int n=9;
    stack<int> st;
    vector<int>ans(n,-1);
    for(int i=0;i<n;i++)
    {
        while(!st.empty()&&arr[st.top()]<arr[i])          //Stack store values as it's index.
        {
            ans[st.top()]=arr[i];
            st.pop();
        }
        st.push(i);
    }
    for (int i=0;i<ans.size();i++) {
        cout << ans[i]<<" ";
    }
}