#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // set<int> s;   

    set<int, greater<int> > s;   // greater store value in decending order 


    s.insert(23);      // By default it Store value in assending order 
    s.insert(45);
    s.insert(325);
    s.insert(65);
    s.insert(90);
    
    s.insert(23);

    // Search element

    //find function  ---------->return the itrrator of that number.
    if(s.find(90)!=s.end())
        cout<<"present"<<endl;
    else
        cout<<"absent"<<endl;

    // count function
    if(s.count(90))
        cout<<"present"<<endl;
    else
        cout<<"absent"<<endl;


    //Delete
    s.erase(90);


    //Iterate
    for(auto it=s.begin(); it != s.end(); it++)
    {
        cout<<*it<<" ";
    }
    


}