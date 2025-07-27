#include<vector>
#include<algorithm>
#include<climits>
#include<iostream>
using namespace std;
bool comp(vector<int>a, vector<int>b)
{
    return a[1] < b[1];
}

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(), intervals.end(),comp);

        int end = INT_MIN;
        int remove=0;

        for(int i=0;i<intervals.size();i++)
        {
            if(end<=intervals[i][0])
            {
                end = intervals[i][1];
            }
            else
            remove++;
        }
        return remove;
    }
};
int main()
{
    
    
}