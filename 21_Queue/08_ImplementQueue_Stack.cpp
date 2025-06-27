#include<iostream>
#include<stack>
using namespace std;

class MyQueue {
    stack<int>st1;
    stack<int>st2;
public:
    
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        if(empty())
        return 0;
        if(!st2.empty())
        {
            int element = st2.top();
            st2.pop();
            return element;
        }
        else
        {
            while(!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
            int element=st2.top();
            st2.pop();
            return element;
        }
    }
    
    int peek() {
        if(empty())
            return 0;
        if(!st2.empty())
        {
            return st2.top();
        }
        else
        {
            while(!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
            return st2.top();
        }
    }
    
    bool empty() {
        return st1.empty() && st2.empty();
    }
};


int main()
{
    MyQueue myQueue = MyQueue();
    myQueue.push(1); // queue is: [1]
    myQueue.push(2); // queue is: [1, 2] (leftmost is front of the queue)
    cout<<myQueue.peek()<<endl; // return 1
    cout<<myQueue.pop()<<endl; // return 1, queue is [2]
    cout<<myQueue.empty()<<endl; // return false

    
}