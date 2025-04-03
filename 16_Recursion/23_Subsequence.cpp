#include<iostream>
#include<vector>
using namespace std;
void subseq(int arr[],int index,int n,vector<vector<int >>&ans,vector<int>&temp)
{
    if(index==n)
    {
        ans.push_back(temp);
        return;
    }
    // No case
    subseq(arr,index+1,n,ans,temp);

    //Yes case
    temp.push_back(arr[index]);
    subseq(arr,index+1,n,ans,temp);
    temp.pop_back();
}
int main()
{
    int arr[]={1,2,3};
    vector<vector<int> >ans;
    vector<int>temp;
    int n = 3;
    subseq(arr,0,n,ans,temp);
    // cout<<ans.size();
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}