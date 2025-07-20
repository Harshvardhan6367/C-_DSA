#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Solution {
  public:
    bool isBipartite(int V, vector<vector<int>> &edges) {
        // Code here
         /// Step 1: Convert edge list to adjacency list
         vector<vector<int>> adj(V);
          for (auto &edge : edges) {
                adj[edge[0]].push_back(edge[1]);
                adj[edge[1]].push_back(edge[0]); // ✅ Added for undirected graph
            }
      
            vector<int>color(V,-1);
            queue<int>q;
      
      for(int i=0;i<V;i++)
      {
          if(color[i]==-1)
          {
                
                q.push(i);
                color[i]=0;
                
                while(!q.empty())
                {
                    int node = q.front();
                    q.pop();
                    
                    for(int j=0;j<adj[node].size();j++)
                    {
                        //Color is not assigned to them
                        if(color[adj[node][j]]==-1)
                        {
                            color[adj[node][j]] = (color[node]+1)% 2;   // Assign color to neighbour Opposite to the color of node
                            q.push(adj[node][j]);
                        }
                        //Color is assigned to Them
                        else
                        {
                            if(color[node]==color[adj[node][j]])
                            return 0;
                        }
                    }
                }
          }
      }
      
       
        
        
        return 1;
    }
};

int main()
{
    
    
}