#include<iostream>
#include<vector>
using namespace std;
// User function Template for C++

class Solution {
  public:
  
  void DFS(int node, vector<int>adj[], vector<bool>&visited)
  {
      visited[node] = 1;
      for(int j=0;j<adj[node].size(); j++)
      {
          if(!visited[adj[node][j]])
          DFS(adj[node][j], adj, visited);
      }
  }
  
  
    int isCircle(vector<string> &arr) {
        
        int N = arr.size();
        
        // Create edges
        // Adjecency list
        
        vector<int>adj[26];  // a-z
        vector<int>Indeg(26,0);
        vector<int>Outdeg(26,0);
        for(int i=0;i<N;i++)
        {
            string temp = arr[i];
            
            int u = temp[0]-'a';
            int v = temp[temp.size()-1]-'a';
            
            adj[u].push_back(v);
            Indeg[v]++;
            Outdeg[u]++;
        }
        
        
        // Eularian Circuit
        // Find Indegree && OutDegree
        
        for(int i=0;i<26;i++)
        {
            if(Indeg[i]!=Outdeg[i])
            return 0;
        }
        
        // All the ages are part of one component
        vector<bool>visited(26,0);
        DFS(arr[0][0]-'a', adj, visited);
           
        for(int i=0;i<26;i++)
        {
            if(Indeg[i]&&!visited[i])
            return 0;
        }
           
          return 1;
    }
};
int main()
{
    
    
}