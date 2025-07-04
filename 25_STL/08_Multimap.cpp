#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    // it store data in key and value 
    

    // map create
    multimap<int, int> m;
    m.insert(make_pair(20,30));       //  Duplicate Keys allowed
    m.insert(make_pair(18,27));
    m.insert(make_pair(26,12));
    m.insert(make_pair(54,22));
    m.insert(make_pair(43,12));
    m.insert(make_pair(900,24));
    m.insert(make_pair(900,34));
    m.insert(make_pair(900,12));
    
    //delete
    m.erase(20);

    //Iterate
    for(auto it=m.begin(); it!=m.end(); it++)
    {
        cout<<it->first <<" "<<it->second<<endl;
    }

    cout<<endl;

   


    //




}