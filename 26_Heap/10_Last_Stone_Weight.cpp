#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int> p;

        for(int i=0; i<stones.size();i++)
        p.push(stones[i]);

        while(p.size()>1)
        {
            int weight = p.top();
            p.pop();
            weight-=p.top();
            p.pop();

            if(weight)
            p.push(weight);
        }

        return p.empty() ? 0 :  p.top();
    }


int main()
{
    
    
}