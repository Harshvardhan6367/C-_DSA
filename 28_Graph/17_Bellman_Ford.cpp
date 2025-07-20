#include<iostream>
#include<vector>
using namespace std;
// User function Template for C++

// time Complexity :  V+E  -->worst case
// best case = E
// Space : V 


class Solution {
  public:
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        // Code here
        
        vector<int>dist(V, 1e8);    // 1e8  --> 10 to power 8  / 10^8
        
        dist[src]=0;
        int e = edges.size();
        
        // Relax edges (V-1)times
        for(int i=0;i<V-1;i++)
        {
            
            for(int j=0;j<e;j++)
            {
                int u = edges[j][0];
                int v = edges[j][1];
                int weight = edges[j][2];
                
                if(dist[u]==1e8)
                continue;
                
                if(dist[u]+weight < dist[v])
                {
                    dist[v] = dist[u]+weight;
                }
            }
        }
        
        //  To deduct the cycle 
        for(int j=0;j<e;j++)
        {
            int u = edges[j][0];
            int v = edges[j][1];
            int weight = edges[j][2];
            
            if(dist[u]==1e8)
            continue;
                
            if(dist[u]+weight < dist[v])
            {
                // Cycle deducted 
                vector<int>ans;
                ans.push_back(-1);
                return ans;
            }
        }
            
            
        return dist;
            
    }
};

int main()
{
    
    
}