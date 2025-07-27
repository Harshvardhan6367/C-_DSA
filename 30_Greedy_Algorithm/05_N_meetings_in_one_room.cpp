#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool comp(pair<int, int>a, pair<int, int>b)
{
    return a.second<b.second;
}

class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    
    
    int maxMeetings(vector<int>& start, vector<int>& end) {
        
        int n = start.size();
        
        // sort it on basis of end time in ascending order
        vector<pair<int, int>>timer;
        for(int i=0;i<n;i++)
        timer.push_back({start[i],end[i]});
        
        sort(timer.begin(), timer.end(), comp);
        
        int total = 0;  // Max kitni meeting kara sakta hu
        int ending = -1;
        
        for(int i=0;i<n;i++)
        {
            if(timer[i].first>ending)
            {
                total++;
                ending = timer[i].second;
            }
        }
        // previsious meeting should be less then starting time of next meeting
        return total;
    }
};
int main()
{
    
    
}