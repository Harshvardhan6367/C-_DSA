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

    // Sort the vector before binary search
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout<< ans[i]<<" ";
    }
    cout<<endl;


    // binary search
    cout<< binary_search(ans.begin(), ans.end(), 22)<< endl;

    //cout find index of element
    cout<<find(ans.begin(), ans.end(), 212)-ans.begin()<< endl;

    return 0;
}



