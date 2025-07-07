#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int minCost(vector<int>& arr) {
        // code here
        int n= arr.size();
        
        priority_queue<int, vector<int>, greater<int> > p;
        
        for(int i=0; i<n; i++)
            p.push(arr[i]);
            
        int cost= 0;
        while(p.size()>1)
        {
            int rope = p.top();
            p.pop();
            rope+=p.top();
            p.pop();
            cost+=rope;
            p.push(rope);
        }
        return cost;
    }
int main()
{
    
    
}