#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Solution {
  public:
  
    bool BFS(int vertex, vector<vector<int> >adj, vector<bool>visited)
    {
        queue<pair<int, int> >q;
        visited[vertex]=1;
        q.push(make_pair(0,-1));   // Make pair of node and it's parent
        
        while(!q.empty()) 
        {
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            
            for(int j=0; j<adj[node].size();j++)
            {
                if(parent==adj[node][j])
                continue;
                if(visited[adj[node][j]])
                return 1;
                
                visited[adj[node][j]]=1;
                q.push(make_pair(adj[node][j],node));
            }
        }
        return 0;
        
    }
  
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        
        vector<bool>visited(V,0);
        
        for(int i=0; i<V; i++)
        {
            if(!visited[i] && BFS(i,edges, visited))
            return 1;
        }
        return 0;
    }
};
int main()
{
    
    
}