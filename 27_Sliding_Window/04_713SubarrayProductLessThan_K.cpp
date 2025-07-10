#include<iostream>
#include<vector>
#include<bits\stdc++.h>
using namespace std;

int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int product=1;
        int start = 0, end=0 , n = nums.size(), count = 0;

        while(end<n)
        {
            product *= nums[end];

            // Product should be smaller then k
            while(product>=k && start<=end)
            {
                product /= nums[start];
                start++;
            }
            count+= 1+(end-start);
            end++;
        }
        return count;
    }

    
int main()
{
    
    
}