#include<iostream>
#include<vector>
#include<stack>
using namespace std;
//Position this line where user code will be pasted.
class Solution {
  public:
  
  void Topological(int node, vector<vector<int>>& adj, vector<bool>&visited, stack<int>&s)
  {
      visited[node]=1;
      
      // Look all neighbour
      for(int j=0;j<adj[node].size();j++)
      {
          if(!visited[adj[node][j]])
          Topological(adj[node][j], adj, visited, s);
      }
      
      s.push(node);
  }
  
  void DFS(int node, vector<vector<int>>&adj, vector<bool>&visited)
  {
      visited[node] = 1;
      
      for(int j=0;j<adj[node].size();j++)
      {
          if(!visited[adj[node][j]])
          DFS(adj[node][j], adj, visited);
      }
  }
  
    int kosaraju(vector<vector<int>> &adj) {
        int V  = adj.size();
        // Topological Sort
        stack<int>s;
        vector<bool>visited(V,0);
        
        for(int i=0;i<V;i++)
        {
            if(!visited[i])
            Topological(i, adj, visited, s);
        }
        
        // Transpose the graph  --> Reverse the edges
        vector<vector<int>> adj2(V);
        
        for(int i=0;i<V;i++)
        for(int j=0;j<adj[i].size();j++)
        {
            int u = i;
            int v = adj[i][j];
            adj2[v].push_back(u);
        }
        
        // pop the element from stack
        
            // If pop node not connected yet
                // scc++
                // DFS
            
        for(int i=0;i<V;i++)
        visited[i]=0;
        
        int SCC = 0; 
        while(!s.empty())
        {
            int node = s.top();
            s.pop();
            if(!visited[node])
            {
                SCC++;
                DFS(node, adj2, visited);
            }
        }
        
        return SCC;
    }
};
int main()
{
    
    
}