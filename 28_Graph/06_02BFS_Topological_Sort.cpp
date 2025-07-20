#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Solution {
  public:
  
        //Kahn Algorithm 
  
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        
        // Step 1: Convert edge list to adjacency list
      vector<vector<int>> adj(V);
      for (auto &edge : edges) {
          adj[edge[0]].push_back(edge[1]);
      }
        
        vector<int> ans;
        vector<int>InDeg(V,0);   // Store Indegree of all vertex
        
        for(int i=0;i<V;i++)
        for(int j=0;j<adj[i].size();j++)
        InDeg[adj[i][j]]++;
        
        // Push all node of zeor Indegree into queue
        queue<int>q;
        for(int i=0;i<V;i++)
        if(!InDeg[i])
        q.push(i);
        
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            ans.push_back(node);
            
            //neighbour , unki ko decrese karta hai by 1
            for(int j=0;j<adj[node].size();j++)
            {
                InDeg[adj[node][j]]--;
                if(InDeg[adj[node][j]]==0)
                q.push(adj[node][j]);
            }
        }
         return ans;
    }
};


int main()
{
    
    
}