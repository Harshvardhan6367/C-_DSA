#include<iostream>
#include<vector>
using namespace std;
void Subset(int arr[],int index,int n,int sum,vector<int>&ans)
{
    if(index==n)
    {
        ans.push_back(sum);
        return;
    }
    //No case(not include)
    Subset(arr,index+1,n,sum,ans);
    //Yes case(include)
    Subset(arr,index+1,n,sum+arr[index],ans);
}
int main()
{
    int arr[]={3,4,5};
    int sum=0, n=3;
    vector<int>ans;
    Subset(arr,0,n,sum,ans);
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<endl;
}