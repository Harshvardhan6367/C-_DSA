#include<iostream>
#include<vector>
#include<climits>
#include<queue>
using namespace std;

// User Function Template
class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Code here
        // Step 1: Convert edge list to adjacency list
        vector<vector<pair<int, int>>> adj(V);
        for (auto &edge : edges) {
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];
            adj[u].push_back({v, w});
            adj[v].push_back({u, w}); 
        }
          
          vector<bool>Explored(V,0);
          vector<int>dist(V,INT_MAX);
          dist[src]=0;
          
          priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>>p;
          p.push({0, src});
          
          // Select a node which is not explored yet & it's dist vlue is minimum.
         
              while(!p.empty())
              {
                  int node = p.top().second;
                  p.pop();
                  if(Explored[node]==1)
                  continue;
                  
                  Explored[node] = 1;
                  // Relax the edges 
                  for(int j=0;j<adj[node].size();j++)
                  {
                      int neighbour = adj[node][j].first; 
                      int weight = adj[node][j].second;
                      if(!Explored[neighbour] && (dist[node]+weight<dist[neighbour]))
                      {
                          dist[neighbour] = dist[node]+weight;
                          p.push({dist[neighbour], neighbour});
                      }
                  }
          
                }
          
          return dist;
    }
};

int main()
{
    
    
}