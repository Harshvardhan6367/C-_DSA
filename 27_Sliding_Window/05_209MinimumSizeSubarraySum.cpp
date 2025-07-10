#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int minSubArrayLen(int target, vector<int>& nums) {
        int total = INT_MAX, start=0, end=0;
        int sum=0, n=nums.size();

        while(end<n)
        {
            sum+=nums[end];    // Add number to the sum

            //window ke lenght ko decrese kar sakta hu ??
            while(sum>=target)
            {
                total = min(total, end-start+1);
                sum-=nums[start++];
            }

            //Window ke lenght ko increse karo
            end++;
        }
        return total==INT_MAX ? 0:total;
    }

int main()
{
    
    
}