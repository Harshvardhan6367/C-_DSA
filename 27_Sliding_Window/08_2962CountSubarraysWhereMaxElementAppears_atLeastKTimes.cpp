#include<iostream>
#include<vector>
#include<climits>
#include<bits/stdc++.h>
using namespace std;
long long countSubarrays(vector<int>& nums, int k) {
        int start=0, end=0, maxEle, count=0, n=nums.size();
        for(int i=0;i<n;i++)
        maxEle=max(maxEle, nums[i]);
        long long total=0;
        while(end<n)
        {
            if(nums[end]==maxEle)
                count++;
            while(count==k)
            {
                total+=n-end;
                if(nums[start]==maxEle)
                    count--;
                start++;
            }
            end++;
            
        }
        return total;
    }
int main()
{
    
    
}