#include<iostream>
#include<vector>
using namespace std;

void ArrrToBST(vector<int>arr, int start, int end, vector<int> &ans)
  {
      if(start>end)
        return;
        
    int mid = start + (end-start) /2;
    
    ans.push_back(arr[mid]);
    
    ArrrToBST(arr , start, mid-1, ans);
    ArrrToBST(arr , mid+1, end, ans);
    
  }
  
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        vector<int> ans;
        
        ArrrToBST(nums,0 , nums.size()-1, ans);
        return ans;
    }


int main()
{
    
    
}