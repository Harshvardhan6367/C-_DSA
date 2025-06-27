#include<iostream>
#include<queue>
using namespace std;

class MyStack {
    queue<int>q1;
    queue<int>q2;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        if(empty())
            q1.push(x);
        else if(q1.empty())
        {
            q2.push(x);
        }
        else
        {
            q1.push(x);
        }
    }
    
    int pop() {
        if(empty())
            return 0;
        else if(q2.empty())
        {
            while(q1.size()>1)
            {
                q2.push(q1.front());
                q1.pop();
            }
            int element = q1.front();
            q1.pop();
            return element;
        }
        else 
        {
            while(q2.size()>1)
            {
                q1.push(q2.front());
                q2.pop();
            }
            int element = q2.front();
            q2.pop();
            return element;
        }
    }
    
    int top() {
        if(empty())
            return 0;
        else if(q1.empty())
        {
            return q2.back();
        }
        else
        {
            return q1.back();
        }
    }
    
    bool empty() {
        return q1.empty() && q2.empty();
    }
};


int main()
{
    MyStack myStack =  MyStack();
    myStack.push(1);
    myStack.push(2);
    cout<<myStack.top()<<endl; // return 2
    cout<<myStack.pop()<<endl; // return 2
    cout<<myStack.empty()<<endl; // return False
    
}