#include<iostream>
#include<vector>
using namespace std;
int row[4] = {-1,1,0,0};
  int col[4] = {0,0,-1,1};
  
  string dir = "UDLR";
  
  bool valid(int i, int j, int n)
  {
      return i>=0 && j>=0 && i<n && j<n;
  }
  void Total(vector<vector<int>>&matrix, int i, int j, int n, string &path, vector<string>&ans, vector<vector<bool>>&visited)
  {
      if(i==n-1 && j==n-1)
      {
          ans.push_back(path);
          return;
      }
      
      visited[i][j]=1;
      
      for(int k=0;k<4;k++)
      {
          if(valid(i+row[k],j+col[k],n) && matrix[i+row[k]][j+col[k]] && !visited[i+row[k]][j+col[k]])
          {
              path.push_back(dir[k]);
              Total(matrix, i+row[k],j+col[k],n,path,ans,visited);
              path.pop_back();
          }
      }
      visited[i][j]=0;
      
      
    //   //Up
    //   if(valid(i-1,j,n) && matrix[i-1][j]&& !visited[i-1][j])
    //   {
    //       path.push_back("U");
    //       Total(matrix,i-1,j,n,path,ans,visited);
    //   }
    //   //Down
    //   if(valid(i+1,j,n) && matrix[i+1][j]&& !visited[i+1][j])
    //   {
    //       path.push_back("D");
    //       Total(matrix,i+1,j,n,path,ans,visited);
    //   }
    //   //Left
    //   if(valid(i,j-1,n) && matrix[i][j-1]&& !visited[i][j-1])
    //   {
    //       path.push_back("L");
    //       Total(matrix,i,j-1,n,path,ans,visited);
    //   }
    //   //Right
    //   if(valid(i,j+1,n) && matrix[i][j+1]&& !visited[i][j+1])
    //   {
    //       path.push_back("R");
    //       Total(matrix,i,j+1,n,path,ans,visited);
    //   }
  }
int main()
{
    vector<vector<int>> mat;
    
    int n = mat.size();
        vector<vector<bool>> visited(n,vector<bool>(n,0));
        vector<string>ans;
        string path; 
        
        //edge cases
        if(mat[0][0]==0 || mat[n-1][n-1]==0)
        // cout<< ans;
        
        Total(mat, 0,0,n,path,ans,visited);
    
}