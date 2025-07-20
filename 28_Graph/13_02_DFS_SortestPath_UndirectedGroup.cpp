#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

vector<int> shortestPath( vector<pair<int,int>> edges , int N , int M, int src , int dest){
	
	// Write your code here

	vector<int>adj[N];

	for(int i=0;i<M;i++)
	{
		adj[edges[i].first-1].push_back(edges[i].second-1);
		adj[edges[i].second-1].push_back(edges[i].first-1);
	}

	src--;
	dest--;    // Convert 1 base indexing into 0 base indexing

	
        
        // array distance
        
        vector<bool>visited(N,0);
		vector<int>parent(N,-1);
        
        queue<int>q;
        
        q.push(src);
        visited[src]=1;


        
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            
            // Look all neighbour
            for(int j=0;j<adj[node].size();j++)
            {
                if(visited[adj[node][j]])
                continue;
                
                visited[adj[node][j]]=1;
                q.push(adj[node][j]);
                
				parent[adj[node][j]] = node;
            }
        }
        
        vector<int>path;
		while(dest!=-1)
		{
			path.push_back(dest+1);
			dest=parent[dest];
		}

		reverse(path.begin(),path.end());

		return path;
}


int main()
{
    
    
}