#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

vector<int> mergeKArrays(vector<vector<int>> arr, int K) {
        // code here
        
        vector<pair< int, pair<int, int>> > temp;
        for(int i=0;i<K;i++)
        {
            temp.push_back(make_pair(arr[i][0], make_pair(i,0)));
        }
        
        priority_queue<pair<int, pair<int, int>> , vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>>p(temp.begin(),temp.end());
        
        //data row col  -->pair
        vector<int>ans;
        pair<int, pair<int, int>>Element;
        int i, j;
        
        while(!p.empty())
        {
            Element = p.top();
            p.pop();
            ans.push_back(Element.first);
            i=Element.second.first;
            j=Element.second.second;
            if(j+1<K)
            p.push(make_pair(arr[i][j+1], make_pair(i,j+1)));
        }
        
        return ans;
    }


int main()
{
    
    
}