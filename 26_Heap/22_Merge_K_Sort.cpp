#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
  
void merge(vector<int>arr,int start,int mid,int end)
{
    vector<int>temp(end-start+1);
    int left = start, right = mid+1, index=0;
    while(left<=mid && right<=end)
    {
        if(arr[left]<=arr[right])
        {
            temp[index]=arr[left];
            index++, left++;
        }
        else 
        {
            temp[index]=arr[right];
            index++, right++;
        }
    }
    // If left side of element remains
    while(left<=mid)
    {
        temp[index]=arr[left];
        index++, left++;
    }
    // If right side of element remains
    while(right<=end)
    {
        temp[index]=arr[right];
        index++, right++;
    }

    // temp ---> array
    index=0;
    while(start<=end)
    {
        arr[start]=temp[index];
        start++, index++;
    }
}

void mergesort(vector<int>&arr,int start,int end, int portion, int k)
{
    if(portion<2)
        return;
        

    int mid = start+(portion/2)*k-1;  //odd case even case
    
    mergesort(arr,start,mid,portion/2,k);  //Split array half into left 
    mergesort(arr,mid+1,end,portion-portion/2,k);  //Split array half into left

    merge(arr,start,mid,end);
}


    // Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K) {
        // code here
        
        //Merge sort
        vector<int>ans;
        for(int i=0;i<K;i++) 
        for(int j=0;j<K;j++)
        {
            ans.push_back(arr[i][j]);
        }
        mergesort(ans,0,ans.size()-1,K,K);
        return ans;
    }
};
int main()
{
    
    
}