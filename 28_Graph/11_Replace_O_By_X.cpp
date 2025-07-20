#include<iostream>
#include<vector>
#include<queue>
using namespace std;
// User function Template for C++

class Solution {
  public:
  int r;
  int c;
  
  int row[4]={1,-1,0,0};
  int col[4]={0,0,1,-1};
  
  bool valid(int i, int j)
  {
      return i>=0&&i<r && j>=0&&j<c;
  }
  
    vector<vector<char>> fill(vector<vector<char>>& mat) {
        // code here
        r=mat.size();
        c=mat[0].size();
        
        // Apply BFS opration from broder . Where O is present
        // replace O with T
        
        queue<pair<int,int>>q;
        // First row
        for(int j=0;j<c;j++)
        {
            if(mat[0][j]=='O')
            {
                q.push(make_pair(0,j));
                mat[0][j]='T';
            }
        }
        // First col
        for(int i=0;i<r;i++)
        {
            if(mat[i][0]=='O')
            {
                q.push(make_pair(i,0));
                mat[i][0]='T';
            }
        }
        // Last row
        for(int j=1;j<c;j++)
        {
            if(mat[r-1][j]=='O')
            {
                q.push(make_pair(r-1,j));
                mat[r-1][j]='T';
            }
        }
        // Last col
        for(int i=1;i<r-1;i++)
        {
            if(mat[i][c-1]=='O')
            {
                q.push(make_pair(i,c-1));
                mat[i][c-1]='T';
            }
        }
        
        
        while(!q.empty())
        {
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            
            for(int k=0;k<4;k++)
            {
                if(valid(i+row[k], j+col[k]) && mat[i+row[k]][j+col[k]]=='O')
                {
                    mat[i+row[k]][j+col[k]]= 'T';
                    q.push(make_pair(i+row[k], j+col[k]));
                }
            }
        }
        
        // REplace All O with X 
        // Replace all T with O
        for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
        {
            if(mat[i][j]=='O')
            mat[i][j]='X';
            else if(mat[i][j]=='T')
            mat[i][j]='O';
            
        }
        return mat;
    }
};
int main()
{
    
    
}