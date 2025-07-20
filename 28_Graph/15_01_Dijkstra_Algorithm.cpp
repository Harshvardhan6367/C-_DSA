#include<iostream>
#include<vector>
#include<climits>
using namespace std;

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
          
          // Select a node which is not explored yet & it's dist vlue is minimum.
          int count = V;
          
          while(count--)
          {
              int node = -1, value = INT_MAX;
              for(int i=0;i<V;i++)
              {
                  if(!Explored[i] && value>dist[i])
                  {
                      node = i;
                      value = dist[i];
                  }
              }
              
              Explored[node] = 1;
              // Relax the edges 
              for(int j=0;j<adj[node].size();j++)
              {
                  int neighbour = adj[node][j].first; 
                  int weight = adj[node][j].second;
                  if(!Explored[neighbour] && (dist[node]+weight<dist[neighbour]))
                  {
                      dist[neighbour] = dist[node]+weight;
                  }
              }
          }
          
          return dist;
    }
};

int main()
{
    
    
}