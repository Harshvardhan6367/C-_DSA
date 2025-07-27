#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& arr, int k) {
        // Code here
        sort(arr.begin(), arr.end());   // assending order
        
        int min_amount=0, max_amount=0;
        int i=0, j=arr.size()-1;
        
        while(i<=j)
        {
            min_amount+=arr[i];
            i++;
            j-=k;
        }
        
        j=0, i=arr.size()-1;
        while(i>=j)
        {
            max_amount+=arr[i];
            i--;
            j+=k;
        }
        vector<int>ans;
        ans.push_back(min_amount);
        ans.push_back(max_amount);
        
        return ans;
    }
};
int main()
{
    
    
}