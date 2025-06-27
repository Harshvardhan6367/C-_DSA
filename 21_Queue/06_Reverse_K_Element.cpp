#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main()
{
    queue<int> q;
    q.push(3);
    q.push(4);
    q.push(6);
    q.push(35);
    q.push(12);

    stack<int> st;
    int k = 3;
    while (k--)
    {
        st.push(q.front());
        q.pop();
    }
    int n=q.size();

    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    while (n--)
    {
        q.push(q.front());
        q.pop();
    }

     int z = q.size();
    while(z--)
    {
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
}