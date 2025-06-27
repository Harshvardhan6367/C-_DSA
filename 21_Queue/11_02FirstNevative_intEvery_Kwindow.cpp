#include<iostream>
#include<vector>
#include<queue>
#include<iostream>
using namespace std;

//
class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        vector<int>ans;
        queue<int>q;
        int n=arr.size();
        
        for(int i=0;i<k-1;i++)
        {
            if(arr[i]<0)
                q.push(i);   //Store in queue as Index;
        }
        for(int i=k-1;i<n;i++)
        {
            if(arr[i]<0)
                q.push(i);
            if(q.empty())
                ans.push_back(0);
            else
            {
                if(q.front()<=i-k)
                    q.pop();
                if(q.empty())
                    ans.push_back(0);
                else
                    ans.push_back(arr[q.front()]);
            }
        }
        return ans;
        
    }
    
};


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