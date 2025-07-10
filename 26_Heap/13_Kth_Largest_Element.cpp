#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int>& nums, int k) {
        //Min queue
        priority_queue<int, vector<int>, greater<int> >p;

        // Insert K element
        for(int i=0;i<k;i++)
        p.push(nums[i]);

        for(int i=k; i<nums.size();i++)
        {
            if(nums[i]>p.top())
            {
                p.pop();
                p.push(nums[i]);
            }
        }
        return p.top();
    }


int main()
{
    
    
}