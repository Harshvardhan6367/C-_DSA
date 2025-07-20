#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Solution {
  public:
    bool isPossible(int N, int P, vector<pair<int, int> >& prerequisites) {
        // Code here
        
        vector<int>adj[N];
        vector<int>indegree(N,0);
        
        for(int i=0;i<P;i++)
        {
            adj[prerequisites[i].second].push_back(prerequisites[i].first);
            indegree[prerequisites[i].first]++;
        }
        
        
        
        // Kahn's algorithm
        // find Indegree 
        
        queue<int>q;
        for(int i=0;i<N;i++)
        if(!indegree[i])
        q.push(i);
        int count = 0;     // Kitne size ka topological sort hoga
        
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            count++;
            
            // Look at the neighbour 
            for(int j=0;j<adj[node].size();j++)
            {
                indegree[adj[node][j]]--;
                if(!indegree[adj[node][j]])
                q.push(adj[node][j]);
            }
        }
        
        
        //Size == N --> acyclic  ---> I am able to complete all tasks. 
        // Directed Acyclic Graph
        return count == N;
    }
};
int main()
{
    
    
}