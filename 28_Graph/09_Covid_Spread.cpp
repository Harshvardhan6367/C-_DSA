#include<iostream>
#include<queue>
#include<vector>
using namespace std;
// User function Template for C++

class Solution {
  public:
  int r; 
  int c;
  
  bool valid(int i, int j)
  {
      return i>=0&& i<r &&  j>=0&&j<c;
  }
  
  
    int helpaterp(vector<vector<int>> hospital) {
        // code here
         r = hospital.size();       // row
         c = hospital[0].size();    // col
        
        // BFS
        queue<pair<int, int> >q;
        
        for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
        if(hospital[i][j]==2)
        q.push(make_pair(i,j));
        
        int timer=0;
        while(!q.empty())
        {
            timer++;
            int curr_patient=q.size();
            while(curr_patient--)
            {
                int i= q.front().first;
                int j= q.front().second;
                q.pop();
                
                int row[4] = {-1, 1, 0, 0};
                int col[4] = {0, 0, -1, 1};
                
                for(int k=0;k<4; k++)
                {
                    if(valid(i+row[k], j+col[k]) && hospital[i+row[k]][j+col[k]]==1)
                    {
                        hospital[i+row[k]][j+col[k]]=2;
                        q.push(make_pair(i+row[k],j+col[k]));
                    }
                    
                }
                
            }
        }
        
        
        for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
        if(hospital[i][j]==1)
        return -1;
        
        return timer-1;
    }
};

int main()
{
    
    
}