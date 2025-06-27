#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;
    s.push(6);
    s.push(26);
    cout<<s.size()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;
    
}