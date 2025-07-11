#include<iostream>
#include<vector>
#include<climits>
#include<bits/stdc++.h>
using namespace std;
int subarraysWithKDistinct(vector<int>& nums, int k) {
        int total=0;
        //Atleast(k) - Atleast(K+1)
        unordered_map<int, int>freq;

        int start =0, end=0, n=nums.size(), count=0;

        // count of different integer in that window
        while(end<n)
        {
            freq[nums[end]]++;  //Add frequency of that number 

            if(freq[nums[end]]==1)
            count++;

            //Increase the window size till
            //number of diffrent integer equal to k

            //Dectese thr window size 
            while(count==k)
            {
                total+=n-end;
                freq[nums[start]]--;
                if(freq[nums[start]]==0)
                count--;
                start++;
            }
            end++;
        }

        start=0, end =0, count=0;
        freq.clear();
        k++;
        while(end<n)
        {
            freq[nums[end]]++;  //Add frequency of that number 

            if(freq[nums[end]]==1)
            count++;

            //Increase the window size till
            //number of diffrent integer equal to k

            //Dectese thr window size 
            while(count==k)
            {
                total-=n-end;
                freq[nums[start]]--;
                if(freq[nums[start]]==0)
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