#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
  bool CycleDetect(int node, int parent, vector<vector<int> >&adj, vector<bool>&visited)
  {
      visited[node]=1;
      
      for(int i=0;i<adj[node].size();i++)
      {
          if(parent==adj[node][i])
          continue;
          if(visited[adj[node][i]])
          return 1;
          
          if(CycleDetect(adj[node][i], node, adj, visited))
          return 1;
      }
      return 0;
  }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        
        vector<bool>visited(V,0);
        
        // Visit all Unvisited Node
        for(int i=0;i<V;i++) 
        {
            if(!visited[i]  && CycleDetect(i,-1,edges,visited) )
            {
                return 1; 
            }
        }
        return 0;
    }
};
int main()
{
    
    
}