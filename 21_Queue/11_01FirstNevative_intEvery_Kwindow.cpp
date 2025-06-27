#include<iostream>
#include<vector>
#include<queue>
#include<iostream>
using namespace std;
// Approach 1 --->    :     time limit Exceded
class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        vector<int>ans;
        queue<int>q;
        int n=arr.size();
        
        for(int i=0;i<k-1;i++)
        {
            q.push(arr[i]);
        }
        for(int i=k-1;i<n;i++)
        {
            q.push(arr[i]);
            ans.push_back(display(q));
            q.pop();
        }
        return ans;
        
    }
    int display(queue<int>q)
    {
        while(!q.empty())
        {
            if(q.front()<0)
                return q.front();
            q.pop();
        }
        return 0;
    }
};



//


int main()
{
    vector<int> arr = {-8, 2, 3, -6, 10} ; 
    int k = 2;
    Solution S;
    vector<int>ans = S.firstNegInt(arr,k);

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}