#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
  
  void DFS(int node, vector<vector<int> >&adj, vector<int>&ans, vector<bool>&visited)
  {
      visited[node]=1;
      ans.push_back(node);
      
      for(int j=0;j<adj[node].size();j++)
      {
          if(!visited[adj[node][j]])
          DFS(visited[adj[node][j]], adj, ans, visited);
      }
  }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int v = adj.size();
        
        vector<bool>visited(v,0);
        vector<int>ans;
        
        DFS(0,adj, ans, visited);
        
        return ans;
    }
};

int main()
{
    
    
}