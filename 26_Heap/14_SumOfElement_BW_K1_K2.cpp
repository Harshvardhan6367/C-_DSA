#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long sumBetweenTwoKth(long long A[], long long N, long long K1, long long K2) {
        // Your code goes here
        priority_queue<long long>p1;
        priority_queue<long long>p2;
        
        //Insert K1 into p1
        for(long long i=0;i<K1;i++)
        p1.push(A[i]);
        //Insert K2 into p2
        for(long long i=0;i<K2-1;i++)
        p2.push(A[i]);
        
        // Find K1 Smallest element in array
        for(long long i=K1;i<N;i++)
        {
            if(A[i]<p1.top())
            {
                p1.pop();
                p1.push(A[i]);
            }
        }
        
        // Find K2 Smallest element in array
        for(long long i=K2-1;i<N;i++)
        {
            if(A[i]<p2.top())
            {
                p2.pop();
                p2.push(A[i]);
            }
        }
        
        long long sum1=0, sum2=0; 
        //  Sum of First max heap
        while(!p1.empty())
        {
            sum1+=p1.top();
            p1.pop();
        }
        
        // Sum of seconf max heap
        while(!p2.empty())
        {
            sum2+=p2.top();
            p2.pop();
        }
         
         return sum2-sum1;
        
    }


int main()
{
    
    
}