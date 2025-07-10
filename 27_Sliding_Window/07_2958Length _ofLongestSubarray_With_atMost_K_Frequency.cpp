#include<iostream>
#include<vector>
#include<climits>
#include<bits/stdc++.h>
using namespace std;
int maxSubarrayLength(vector<int>& nums, int k) {
        int len=0;
        unordered_map<int,int>count;

        int start=0, end=0, n=nums.size();

        while(end<n)
        {
            count[nums[end]]++;

            while(count[nums[end]]>k)
            {
                count[nums[start]]--;
                start++;
            }

            len = max(len,end-start+1);
            end++;
        }
        return len;
    }
int main()
{
    
    
}