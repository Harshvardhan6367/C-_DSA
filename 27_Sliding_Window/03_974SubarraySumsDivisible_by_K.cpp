#include<iostream>
#include<vector>
#include<bits\stdc++.h>
using namespace std;

 int subarraysDivByK(vector<int>& nums, int k) {
        //UnorderedMap
        unordered_map<int,int>m;
        m[0]=1;
        int PrefixSum=0, rem, total=0;

        for(int i=0;i<nums.size();i++)
        {
            PrefixSum+=nums[i];
            rem = PrefixSum % k;

            if(rem<0)  //If our reminder is posative make it posative
            rem+=k;

            if(m.count(rem))  // Kyaa pelhe rem aaya hai ya nhi
            {
                total+=m[rem];
                m[rem]++;
            }
            else
            m[rem]=1;
        }
        return total;
    }


int main()
{
    
    
}