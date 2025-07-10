#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Unique keys are present        Duplicate key are not allowed
//But not in ordered way(not sorted form)
// implementation Hashing
//insert, search, delete ------>constant time

int main()
{
    unordered_map<int, int> m;
    // unordered_multimap<int, int> m;
    
    m.insert(make_pair(20,30));       //  Duplicate Keys allowed
    m.insert(make_pair(18,27));
    m.insert(make_pair(26,12));
    m.insert(make_pair(54,22));
    m.insert(make_pair(43,12));
    m.insert(make_pair(900,24));
    
    m[50]= 56;  //

     //Iterate
    for(auto it=m.begin(); it!=m.end(); it++)
    {
        cout<<it->first <<" "<<it->second<<endl;
    }
}