#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution {
  public:
    // Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[]) {
        
        // priority queue
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>>pq;
        
        vector<bool>IsMST(V,0);
        vector<int>parent(V);     // helpful to detect MST tree treversal
        
        int cost = 0;
        
        pq.push({0, {0, -1}});
        
        while(!pq.empty())
        {
            int wt = pq.top().first;
            int node = pq.top().second.first;
            int par = pq.top().second.second;
            pq.pop();
            
            if(!IsMST[node])
            {
                IsMST[node] = 1;
                cost+=wt;
                parent[node] = par;
                
                for(int j=0;j<adj[node].size();j++)
                {
                    if(!IsMST[adj[node][j][0]])
                    {
                        pq.push({adj[node][j][1], {adj[node][j][0], node}});
                    }
                }
            }
        }
        
        return cost;
    }
};


int main()
{
    
    
}