#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l;

    l.push_back(2);
    l.push_back(32);
    l.push_back(26);
    l.push_front(222);
    l.push_front(286);
    l.push_front(224);
              
    cout<<l.front()<<endl;

    l.pop_back();
    l.pop_front();

    cout<<l.front()<<endl;
    cout<<l.back()<<endl;


    cout<<l.size()<<endl;
    cout<<l.empty()<<endl;




    //Iterator
    for(auto it = l.begin(); it!= l.end(); it++)            // auto = list<int> :: iterator
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
    // for(list<int> :: iterator it = l.begin(); it!= l.end(); it++)            // auto = list<int> :: iterator
    // {
    //     cout<<*it<<" ";
    // }
    // cout<<endl;
        
        

    // Print riverse
    for(auto it = l.rbegin(); it!= l.rend(); it++)            // auto = list<int> :: iterator
    {
        cout<<*it<<" ";
    }
    
}