#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    // it store data in key and value 
    // Key sholud be unique

    // map create
    map<int, int> m;
    m.insert(make_pair(20,30));       // Key always unique
    m.insert(make_pair(18,27));
    m.insert(make_pair(26,12));
    m.insert(make_pair(54,22));
    m.insert(make_pair(43,12));
    m.insert(make_pair(900,24));
    m[100] = 60;   // insert value, also update value
    m[26] = 100;
    
    //delete
    m.erase(20);

    //Iterate
    for(auto it=m.begin(); it!=m.end(); it++)
    {
        cout<<it->first <<" "<<it->second<<endl;
    }

    cout<<endl;

    if(m.count(100))
    cout<<m[100]<<endl;
    else
    cout<<"Key not exist";


    //




}