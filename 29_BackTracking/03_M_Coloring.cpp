#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:

  bool DFS(int node, vector<int>& color, vector<vector<int>>& adj, int v, int m) {
      for (int i = 0; i < m; i++) {
          bool IsPossible = true;

          // Check if any adjacent node has same color
          for (int neighbor : adj[node]) {
              if (color[neighbor] == i) {
                  IsPossible = false;
                  break;
              }
          }

          if (!IsPossible)
              continue;

          color[node] = i;

          bool forwardPossible = true;
          for (int neighbor : adj[node]) {
              if (color[neighbor] == -1) {
                  if (!DFS(neighbor, color, adj, v, m)) {
                      forwardPossible = false;
                      break;
                  }
              }
          }

          if (forwardPossible)
              return true;

          // Backtrack
          color[node] = -1;
      }

      return false;
  }

  bool graphColoring(int v, vector<vector<int>> &edges, int m) {
      vector<vector<int>> adj(v);
      for (auto &edge : edges) {
          int u = edge[0];
          int w = edge[1];
          adj[u].push_back(w);
          adj[w].push_back(u);
      }

      vector<int> color(v, -1);
      for (int i = 0; i < v; i++) {
          if (color[i] == -1 && DFS(i, color, adj, v, m) == false)
              return false;
      }

      return true;
  }
};


int main() {
    Solution obj;

    int V1 = 4;
    vector<vector<int>> edges1 = {{0,1},{1,3},{2,3},{3,0},{0,2}};
    int m1 = 3;
    cout << obj.graphColoring(V1, edges1, m1) << endl; // Output: 1 (true)

    int V2 = 3;
    vector<vector<int>> edges2 = {{0,1},{1,2},{0,2}};
    int m2 = 2;
    cout << obj.graphColoring(V2, edges2, m2) << endl; // Output: 0 (false)

    return 0;
}
