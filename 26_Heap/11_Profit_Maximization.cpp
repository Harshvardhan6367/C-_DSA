#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int Profit_Max(vector<int> &A, int B) {
    
    int sum = 0;
    priority_queue<int> p;
    for(int i=0; i<A.size(); i++)
    {
        p.push(A[i]);
    }
    
    //Sell Ticket to B pepole
    while(B && !p.empty())
    {
        sum+=p.top();   //top Ticket price
        
        if(p.top()-1)       //
        p.push(p.top()-1); 
        
        p.pop();
        B--;     //Ticket Sell
        
    }
    return sum;
}

int main()
{
    
    
}