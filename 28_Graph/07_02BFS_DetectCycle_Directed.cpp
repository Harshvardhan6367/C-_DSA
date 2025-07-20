#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution {
  public:
  
      // Using  Kahn Algorithm
  
  
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        
        /// Step 1: Convert edge list to adjacency list
      vector<vector<int>> adj(V);
      for (auto &edge : edges) {
          adj[edge[0]].push_back(edge[1]);
      }
      
       vector<int>indegree(V,0);
       for(int i=0;i<V;i++)
       {
           for(int j=0;j<adj[i].size();j++)
           indegree[adj[i][j]]++;
       }
       
       queue<int>q;
       
       
       
       for(int i=0;i<V;i++)
       {
           if(!indegree[i])
           q.push(i);
       }
       
       vector<int>ans;
       
       while(!q.empty())
       {
            int node = q.front();
            q.pop();
            ans.push_back(node);
             
            for(int j=0;j<adj[node].size();j++)
            {
                indegree[adj[node][j]]--;
                if(!indegree[adj[node][j]])
                q.push(adj[node][j]);
            } 
       }
       
       int count = ans.size();
       
       return count!=V;
       
    }
    
};


int main()
{
    
    
}