#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
  
  bool DetectCycle(int Node, vector<vector<int> >&adj, vector<bool>&path, vector<bool>&visited)
  {
      visited[Node]=1;
      path[Node]=1;
      
      for(int j=0;j<adj[Node].size();j++)
      {
            // If neighbour is already present -->cycle
          if(path[adj[Node][j]])
          return 1;
          else{

              //If neighbour already visited  -->Skip
              if(visited[adj[Node][j]])
              continue;
              //
              if(DetectCycle(adj[Node][j], adj, path, visited))
              return 1;
            } 
      }
      path[Node]=0;
      return 0;
  }
  
  
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        
        /// Step 1: Convert edge list to adjacency list
      vector<vector<int>> adj(V);
      for (auto &edge : edges) {
          adj[edge[0]].push_back(edge[1]);
      }
      
       vector<bool>path(V,0);
       vector<bool>visited(V,0);
       

       for(int i=0;i<V;i++)
        {
       if(!visited[i] && DetectCycle(0, adj, path, visited))
        return 1;
        }
        
        return 0;
         
       
    }
    
};


int main()
{
    
    
}