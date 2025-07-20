#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Solution {
  public:
  
  void DFS(int node, vector<vector<int> >&adj, vector<bool>&visited, stack<int>&s)
  {
      visited[node]=1;
      
      // look at it's negibour one by one
      for(int i=0;i<adj[node].size();i++)
      {
          if(!visited[adj[node][i]])
          DFS(adj[node][i], adj, visited, s);
          
      }
      
      s.push(node);
  }
  
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        
        // Step 1: Convert edge list to adjacency list
      vector<vector<int>> adj(V);
      for (auto &edge : edges) {
          adj[edge[0]].push_back(edge[1]);
      }
        
        vector<bool>visited(V,0);
        stack<int>s;
        
        for(int i=0;i<V;i++)
        {
            if(!visited[i])
            DFS(i,adj, visited, s);
            
        }
        
        vector<int>ans;
        while(!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
};\


int main()
{
    
    
}