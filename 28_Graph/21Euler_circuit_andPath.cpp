#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
  
  void DFS(int node,vector<int> adj[], vector<bool>&visited)
  {
      visited[node]=1;
      
      for(int j=0;j<adj[node].size();j++)
      {
          if(!visited[adj[node][j]])
          DFS(adj[node][j], adj, visited);
      }
  }
  
    int isEulerCircuit(int V, vector<int> adj[]) {
        // Code here
        
        
        // Euler Circuit    : return 2
        
        // Calculate degree of each node
        // All Node should have even degree
        // All non zero degree node should be connected
        
        
        
        // Euler path  : return 1
        
        // Calculate degree of each node
        // aero and two node have odd degree And remaining have even degree
        // All non zero degree node should be connected
        
        
        
        
        vector<int>Degree(V,0);
        int odd_Degree=0 ;            // No of node having odd degree
        for(int i=0;i<V;i++)
        {
            Degree[i] = adj[i].size();
            if(Degree[i]%2)
            odd_Degree++;
        }
        
        if(odd_Degree!=2 && odd_Degree!=0) ///
        return 0;
        
        vector<bool>visited(V,0);
        
        for(int i=0;i<V;i++)
        {
            if(Degree[i])
            {
                DFS(i, adj, visited);
                break;
            }
        }
        
        
        // If non zero degree node is still not visited, return 0
        // Degree zero  --> ignore those node
        for(int i=0;i<V;i++)
        {
            if(Degree[i]&&!visited[i])
            return 0;
        }
        
        // Eulerian path : 1
        // Eulerian circuit : 2
        
        
        if(odd_Degree==0)
        return 2;
        else
        return 1;
        
        
        // Time Complexity : V+E
        // Space Complexity : V
    }
};
int main()
{
    
    
}