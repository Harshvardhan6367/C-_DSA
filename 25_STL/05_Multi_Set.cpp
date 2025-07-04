#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>s;         // Could store multiple same element
    s.insert(10);
    s.insert(30);
    s.insert(10);
    s.insert(550);

    s.erase(10);
    
    for(auto it=s.begin(); it!=s.end(); it++)
    {
        cout<< *it<<" ";
    }
    
}