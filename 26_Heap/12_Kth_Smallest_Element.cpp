#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

// arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        int n = arr.size()-1;
        priority_queue<int>p;
        
        for(int i=0; i<k;i++)
        p.push(arr[i]);
        
        for(int i=k; i<=n;i++) 
        {
            if(arr[i]<p.top())
            {
                p.pop();
                p.push(arr[i]);
            }
        }
        
        return p.top();
    }


int main()
{
    
    
}