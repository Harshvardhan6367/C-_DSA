#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr = {10,20,15,50,10,70,30};
    int n=arr.size();
        vector<int>ans(arr.size(),0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-i;j++)
            {
                int num=INT_MAX;
                for(int k=j;k<i+1+j;k++)
                {
                    num=min(num,arr[k]);
                }
                ans[i]=max(ans[i],num);
            }
        }
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
    
}