#include<iostream>
#include<queue>
using namespace std;
void display(queue<int>q)
{
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
int main()
{
    int arr[]={2,4,2,5,76,4,32,43};
    int k=3;
    int n=8;

    queue<int>q;
    for(int i=0;i<k-1;i++)
        q.push(arr[i]);

    for (int i = k-1; i < n; i++)
    {
        q.push(arr[i]);
        display(q);
        q.pop();
    }
    

    
}