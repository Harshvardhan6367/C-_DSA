#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool find(int node, vector<vector<int>> &adj, int v, int m, vector<int> &color)
    {
        if (node == v)
            return true; // Base case: all nodes colored

        // Try all m colors
        for (int i = 0; i < m; i++)
        {
            bool IsPossible = 1;

            // Check all adjacent nodes
            for (int j = 0; j < adj[node].size(); j++)
            {
                int neighbor = adj[node][j];
                if (color[neighbor] == i)
                {
                    IsPossible = 0;
                    break;
                }
            }

            if (IsPossible)
            {
                color[node] = i;
                if (find(node + 1, adj, v, m, color))
                    return true;
                color[node] = -1; // backtrack
            }
        }

        return false;
    }

    bool graphColoring(int v, vector<vector<int>> &edges, int m)
    {
        vector<vector<int>> adj(v);
        for (auto &edge : edges)
        {
            int u = edge[0];
            int w = edge[1];
            adj[u].push_back(w);
            adj[w].push_back(u);
        }

        vector<int> color(v, -1);
        return find(0, adj, v, m, color);
    }
};

int main()
{
    Solution obj;

    int V1 = 4;
    vector<vector<int>> edges1 = {{0, 1}, {1, 3}, {2, 3}, {3, 0}, {0, 2}};
    int m1 = 3;
    cout << obj.graphColoring(V1, edges1, m1) << endl; // Output: 1 (true)

    int V2 = 3;
    vector<vector<int>> edges2 = {{0, 1}, {1, 2}, {0, 2}};
    int m2 = 2;
    cout << obj.graphColoring(V2, edges2, m2) << endl; // Output: 0 (false)

    return 0;
}
