#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:

// TC --> N!
// SC --> N*N
    bool check(int n, vector<string> &Board, int i, int j)
    {
        // Upper left digonal me koi bhi queen present nahi honi chaiye
        int row = i, col = j;
        while(row>-1 && col>-1)
        {
            if(Board[row][col]=='Q')
            return 0;
            row--, col--;
        }

        // Upper Right digonal me koi bhi queen present nahi honi chaiye
        row=i, col=j;
        while(row>-1 && col<n )
        {
            if(Board[row][col]=='Q')
            return 0;
            row--, col++;
        }
        return 1;
    }

    void find(int row, int n, vector<vector<string>> &ans, vector<string>&Board, vector<bool>&column)
    {
        // Base Condition
        if(row==n)
        {
            ans.push_back(Board);
            return;
        }

        // Put queen at any n position
        for(int j=0;j<n;j++)
        {
            if(column[j]==0 && check(n,Board,row,j))
            {
                column[j] = 1;
                Board[row][j]='Q';
                find(row+1, n, ans, Board, column);
                column[j]=0;
                Board[row][j]='.';
            }
        }


    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string>Board(n);
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        Board[i].push_back('.');
        
        vector<bool>column(n,0);

        find(0,n,ans,Board,column);

        return ans;
    }
};
int main()
{
    
    
}