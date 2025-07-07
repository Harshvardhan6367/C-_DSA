#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> p;    //MaxHeap

    p.push(10);
    p.push(17);
    p.push(45);
    p.push(78);
    p.push(76);
    
    /*
    
    cout<<p.top()<<" "<<endl;   //Give max element

    //Delete operation
    p.pop();
    cout<<p.top()<<endl;

    //Size
    cout<<p.size()<<endl;


    //
    while(!p.empty())
    {
        cout<<p.top()<<" ";
        p.pop();
    }
*/



    priority_queue<int, vector<int>, greater<int> >P;   //MinHeap

    P.push(10);
    P.push(17);
    P.push(45);
    P.push(78);
    P.push(76);

    cout<<P.top()<<endl;

    while(!p.empty())
    {
        cout<<p.top()<<" ";
        p.pop();
    }
}