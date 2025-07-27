#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:

// TC --> N!
// SC --> N*N
    

    void find(int row, int n, vector<vector<string>> &ans, vector<string>&Board, vector<bool>&column,  vector<bool>&LeftDigonal, vector<bool>&RightDigonal)
    {
        // Base Condition
        if(row==n)
        {
            ans.push_back(Board);
            return;
        }

        // Put queen at any n position
        // LeftDigonal : n-1 + col - row
        // RightDigonal : row+col 
        for(int j=0;j<n;j++)
        {
            if(column[j]==0 && LeftDigonal[n-1+j-row]==0 && RightDigonal[row+j]==0)
            {
                column[j] = 1;
                Board[row][j]='Q';
                LeftDigonal[n-1+j-row]=1;
                RightDigonal[row+j]=1;
                find(row+1, n, ans, Board, column, LeftDigonal, RightDigonal);
                column[j]=0;
                Board[row][j]='.';
                LeftDigonal[n-1+j-row]=0;
                RightDigonal[row+j]=0;
            }
        }


    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string>Board(n);
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        Board[i].push_back('.');
        vector<bool>LeftDigonal(2*n-1,0);
        vector<bool>RightDigonal(2*n-1,0);
        vector<bool>column(n,0);

        find(0,n,ans,Board,column, LeftDigonal, RightDigonal);

        return ans;
    }
};
int main()
{
    
    
}