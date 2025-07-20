#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Solution {
  public:
  
  bool checkBip(int node, vector<vector<int>>&adj, vector<int>&color)
  {
      // check each neighbour
      for(int j=0;j<adj[node].size();j++)
      {
          // Color is not assigned to neighbour
          if(color[adj[node][j]]==-1)
          {
              color[adj[node][j]]= (color[node]+1)%2;
              if(!checkBip(adj[node][j],adj,color))
              return 0;
          }
          
          //Color is assigned to neighbour
          else
          {
              if(color[node]==color[adj[node][j]])
              return 0;
          }
      }
      
      return 1;
  }
  
  
    bool isBipartite(int V, vector<vector<int>> &edges) {
        // Code here
         /// Step 1: Convert edge list to adjacency list
          vector<vector<int>> adj(V);
          for (auto &edge : edges) {
                adj[edge[0]].push_back(edge[1]);
                adj[edge[1]].push_back(edge[0]); // ✅ Added for undirected graph
            }
      
            vector<int>color(V,-1);
            
            for(int i=0;i<V;i++)
            {
                if(color[i]==-1)
                {
                    color[i]=0;
                    if(!checkBip(i, adj, color))
                    return 0;
                }
            }
            
            
            return 1;
      
      
    }
};

int main()
{
    
    
}