#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<string, int>p ,e;

    // Insert Methord 1
    p=make_pair("Harsh", 19);

    // Insert Methord 2
    e.first = "Harsh";
    e.second = 19;
  
    //print
    cout<<p.first<< " "<<p.second<<endl;



    //M2
    pair<string , pair<int, int> > h , H;
    
    //Insert
    h.first = "Harsh";
    h.second.first = 19;
    h.second.second= 64;
    
    
    //Insert
    H = make_pair("Harsh", make_pair(19, 64));
    
    
    
    //print
    cout<<h.first<< " "<<h.second.first<< " "<<h.second.second<<endl;
    cout<<H.first<< " "<<H.second.first<< " "<<H.second.second<<endl;




    //
    pair< pair<string, int> , int > M;
    M = make_pair(make_pair("Harsha", 19), 64);

    cout<<M.first.first<<" "<<M.first.second<<" "<<M.second <<endl;   
}