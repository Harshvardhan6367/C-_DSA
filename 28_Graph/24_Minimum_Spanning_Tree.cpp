#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Solution {
  public:
    // Function to find sum of weights of edges of the Minimum Spanning Tree.
    
    int findParent(int u, vector<int>&parent)
    {
        if(u==parent[u])
        return u;
        
        return parent[u] = findParent(parent[u], parent);
              // path compression
    }
    
    
    
    void UnionByRank(int u, int v, vector<int>&parent, vector<int>&rank)
    {
        int pu = findParent(u, parent);
        int pv = findParent(v, parent);
        
        // rank,  merge kar paauuon
        
        if(rank[pu]>rank[pv])
        {
            parent[pv]=pu;
        }
        else if(rank[pu]<rank[pv])
        {
            parent[pu]=pv;
        }
        else
        {
            parent[pv] = pu;
            rank[pu]++;
        }
        
    }
    
    
    int spanningTree(int V, vector<vector<int>> adj[]) {
        
        vector<int>parent(V);   // ultimate parent will help us to determine set
        vector<int>rank(V, 0);  // it will help us to merge set
        for(int i=0;i<V;i++)
        parent[i] = i;
        
        // priority queue
        // weight  edge(U, V)
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>> >pq; 
        for(int i=0;i<V;i++)
        {
            for(int j=0;j<adj[i].size();j++)
            {
                pq.push({adj[i][j][1], {i, adj[i][j][0]}});
            }
        }
        
        int cost = 0;
        int edges = 0;
        
        while(!pq.empty())
        {
            int wt = pq.top().first;
            int u = pq.top().second.first;
            int v = pq.top().second.second;
            pq.pop();
            
            // Check if they are in diffrent set
            if(findParent(u, parent)!=findParent(v, parent))
            {
                cost += wt;
                UnionByRank(u, v, parent, rank);
                edges++;
            }
            
            if(edges==V-1)   // v-1 edges should be my part
            break;
        }
        
        
        
        return cost;
    }
};
int main()
{
    
    
}