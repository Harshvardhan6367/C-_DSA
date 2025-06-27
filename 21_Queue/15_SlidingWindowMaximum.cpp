#include<iostream>
#include<vector>
#include<deque>
using namespace std;

    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        deque<int> d;
        vector<int> ans;
        for(int i=0;i<k-1;i++)
        {
            if(d.empty())
                d.push_back(i);
            else
            {
                while(!d.empty()&&nums[i]>nums[d.back()])
                {
                    d.pop_back();
                }
                d.push_back(i);
            }
        }
        for(int i=k-1;i<n;i++)
        {
            while(!d.empty() && nums[i]>nums[d.back()])
            {
                d.pop_back();
            }
            d.push_back(i);
            if(d.front()<=i-k)
                d.pop_front();
            ans.push_back(nums[d.front()]);
        }
        return ans;
    }

int main()
{
    vector<int>nums = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    vector<int>ans;
    ans = maxSlidingWindow(nums,k);

    for(int i=0;i<nums.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}