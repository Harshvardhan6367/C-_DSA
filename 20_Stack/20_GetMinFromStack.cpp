#include<iostream>
#include<stack>

using namespace std;
class Solution {
  public:
    stack<int> st1;
    stack<int> st2;
    Solution() {
        // code here
        
        
    }

    // Add an element to the top of Stack
    void push(int x) {
        
        // code here
        if(st1.empty())
        {
            st1.push(x);
            st2.push(x);
        }
        else
        {
            st1.push(x);
            st2.push(min(x,st2.top()));
        }
    }

    // Remove the top element from the Stack
        
    void pop() {
        // code here
        if(st1.empty())
            return;
        else
        {
            
            st1.pop();
            st2.pop();
        }
    }

        
    // Returns top element of the Stack
    int peek() {
        // code here
        if(st1.empty())
            return -1;
        else
        {
            return st1.top();
        }
    }
        

    // Finds minimum element of Stack
    int getMin() {
        // code here
        if(st1.empty())
            return -1;
        else
        return st2.top();
    }
};
int main()
{
    Solution So1;
    So1.push(92);
    So1.push(23);
    So1.push(42);
    So1.push(20);
    So1.push(28);

    cout<<So1.getMin();    
}