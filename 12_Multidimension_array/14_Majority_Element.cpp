#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>nums = {3,3,2,3,1,3,2,2,1,3,3};
    int n=nums.size();
        int candidate, count=0;
        
        for(int i=0; i<n; i++)
        {
            if(count==0)
            {
                count=1;
                candidate=nums[i];
            }
            else
            {
                if(candidate==nums[i])
                    count++;
                else
                    count--;
            }  
        }

        // 
        count=0;
        for(int i=0; i<n; i++)
        {
            if(nums[i]==candidate)
                count++;
        }

        //
        if(count>n/2)
            cout<< candidate;
        else
            cout<< "Not exist";

}