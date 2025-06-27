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
    while(!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        q.push(st.top());
        st.pop();
    }
}