#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

class Solution {
  public:
    // Function to find the nodes that are common in both BST.
    vector<int> findCommon(Node *r1, Node *r2) {
        // Your code here
        vector<int> ans;
        stack<Node*> s1, s2;
        
        while(r1)        // All left side push into stack1
        {
            s1.push(r1);
            r1 = r1->left;
        }
        while(r2)         // All left side push into stack1
        {
            s2.push(r2);
            r2 = r2->left;
        }
        
        while(!s1.empty() && !s2.empty())
        {
            // Top element equal
            if(s1.top()->data == s2.top()->data)
            {
                ans.push_back(s1.top()->data);
                r1 = s1.top()->right;
                s1.pop();
                r2 = s2.top()->right;
                s2.pop();
            }
            //s1 > s2
            else if(s1.top()->data > s2.top()->data)
            {
                r2 = s2.top()->right;
                s2.pop();
            }
            //s2 > s1
            else{
                r1 = s1.top()->right;
                s1.pop();
            }
            
            
             while(r1)        
            {
                s1.push(r1);
                r1 = r1->left;
            }
            while(r2)
            {
                s2.push(r2);
                r2 = r2->left;
            }
        }
        
        return ans;
    }
};


int main()
{
    
    
}