#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution {
  public:
  
  int row[8] = {2, 2, -2, -2, 1, -1, 1, -1};
  int col[8] = {1, -1, 1, -1, 2, 2, -2, -2};
  
  bool valid(int i, int j, int N)
  {
      return i>=0 && j>=0 && i<N && j<N;
  }
  
  
    int minStepToReachTarget(vector<int>& KnightPos, vector<int>& TargetPos, int N) {
        // Code here
        
        KnightPos[0]--;
        KnightPos[1]--;
        TargetPos[0]--;
        TargetPos[1]--;
        
        // base case
        if(TargetPos[0] == KnightPos[0] && TargetPos[1] == KnightPos[1])
        return 0;
        
        queue<pair<int, int> >q;
        vector<vector<bool>>chess(N, vector<bool>(N,0));
        q.push({KnightPos[0], KnightPos[1]});
        chess[KnightPos[0]][KnightPos[1]]=1; 
        
        int step = 0;
        
        while(!q.empty())
        {
            int count = q.size();
            
            // Level order trevetsal
            while(count--)
            {
                int i = q.front().first;
                int j = q.front().second;
                q.pop();
                
                for(int k=0;k<8;k++)
                {
                    int new_i = i+row[k];
                    int new_j = j+col[k];
                    
                    if(valid(new_i, new_j, N) && !chess[new_i][new_j])
                    {
                        if(new_i==TargetPos[0] && new_j==TargetPos[1])
                        return step+1;
                        
                        chess[new_i][new_j] = 1;
                        q.push({new_i, new_j});
                    }
                }
            }
            
            step++;
        }
        
        return -1;
    }
};


int main()
{
    
    
}