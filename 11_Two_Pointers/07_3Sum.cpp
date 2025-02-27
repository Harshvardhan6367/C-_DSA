#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>arr = {1, 4, 45, 6, 10, 8};
    int target = 13;
    int n=arr.size();
        sort(arr.begin(), arr.end()); // Sorting the array (Two Pointers needs sorted input)
        for(int i=0; i<n-2;i++){
            int ans= target-arr[i];
            int start=i+1, end=n-1;
            while(start<end)
            {
                if(arr[start]+arr[end]==ans)
                {
                    cout<<"Exist";
                    return 1;
                }
                else if(arr[start]+arr[end]>ans)
                    end--;
                else
                    start++;
            }
        }
        cout<<" Not exist";
    return 0;
}