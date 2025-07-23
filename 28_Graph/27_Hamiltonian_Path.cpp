#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
  
  bool DFS(int node, vector<vector<int>>& adj, vector<bool>&visited, int &count, int n)
  {
      visited[node] = 1;
      count++;
      
      if(count==n)
      return 1;
      
      for(int j=0; j<adj[node].size();j++)
      {
          if(!visited[adj[node][j]] && DFS(adj[node][j], adj, visited, count, n))
          return 1;
      }
      
      visited[node]=0;
      count--;
      return 0;
  }
  
  
  
    bool check(int n, int m, vector<vector<int>> edges) {
        // code here.
        vector<vector<int>> adj(n);
        
        for(int i=0;i<m;i++)
        {
            adj[edges[i][0]-1].push_back(edges[i][1]-1);
            adj[edges[i][1]-1].push_back(edges[i][0]-1);
        }
        int v = adj.size();
        
        vector<bool>visited(n, 0);
        int count = 0;
        
        for(int i=0;i<n;i++)
        {
           if(DFS(i, adj, visited, count, n))
            return 1;
        }
        return 0;
    }
};

int main()
{
    
    
}