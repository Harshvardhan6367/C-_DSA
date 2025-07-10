#include<iostream>
#include<vector>
#include<bits\stdc++.h>
using namespace std;
int findSubarray(vector<int> &arr) {
        // code here.
        int n = arr.size();
        int total =0; //total number of subarray whose count is zero
        
        //map  --> Prefix_sum , count
        unordered_map<int, int>m;
        int prefixSum=0;
        
        //initialize by 0,1
        m[0]=1;
        
        for(int i=0;i<n;i++)
        {
            prefixSum+=arr[i];
            if(m.count(prefixSum))
            {
                total+=m[prefixSum];   // Count of prefix sum add kar do 
                m[prefixSum]++;        // prefix sum ko increse kar do
            }
            else
            m[prefixSum] = 1;
        }
        return total;
    }
int main()
{
    
    
}