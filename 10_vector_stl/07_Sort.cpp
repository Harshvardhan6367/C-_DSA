#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>ans;
    ans.push_back(2);
    ans.push_back(352);
    ans.push_back(235);
    ans.push_back(22);
    ans.push_back(212);

    // sort in incresing order
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout<< ans[i]<<" ";
    }
    cout<<endl;
    
    
    // sort in decreasing order
    sort(ans.begin(), ans.end(), greater<int>());
    for (int i = 0; i < ans.size(); i++)
    {
        cout<< ans[i]<<" ";
    }
    cout<<endl;
    
    // also
    sort(ans.rbegin(), ans.rend());
    for (int i = 0; i < ans.size(); i++)
    {
        cout<< ans[i]<<" ";
    }
    cout<<endl;


    return 0;
}



