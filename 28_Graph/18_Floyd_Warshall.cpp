#include<iostream>
#include<vector>
#include<climits>
using namespace std;
// User function template for C++

class Solution {
  public:
    void floydWarshall(vector<vector<int>> &matrix) {
        // Code here
        
        int n = matrix.size();
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        if(matrix[i][j]==-1)
        matrix[i][j]=INT_MAX;
        
        // Floyd Warshall algorithm
        
        for(int k=0;k<n;k++)
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            if(matrix[i][k]==INT_MAX || matrix[k][j]==INT_MAX)
            continue;
            
            matrix[i][j] = min(matrix[i][j], matrix[i][k]+matrix[k][j]);
        }
        
       
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        if(matrix[i][j]==INT_MAX)
        matrix[i][j]=-1;
        
        
    }
};
int main()
{
    
    
}