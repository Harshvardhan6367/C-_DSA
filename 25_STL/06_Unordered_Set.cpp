#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Unorderd_set"<<endl;
    unordered_set<int>s;         // Could store unique element
    s.insert(104);
    s.insert(30);
    s.insert(10);
    s.insert(550);

    
    for(auto it=s.begin(); it!=s.end(); it++)
    {
        cout<< *it<<" ";
    }

    cout<<endl;


    cout<<"Unorderd_Multiset"<<endl;

    unordered_multiset<int>st;         // Could store same element
    st.insert(30);
    st.insert(10);
    st.insert(10);
    st.insert(104);
    st.insert(30);
    st.insert(550);

    
    for(auto it=st.begin(); it!=st.end(); it++)
    {
        cout<< *it<<" ";
    }
    
}