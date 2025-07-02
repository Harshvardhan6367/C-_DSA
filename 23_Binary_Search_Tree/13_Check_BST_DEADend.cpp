#include<iostream>
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
  
    bool Dead(Node *root, int lower, int upper)
    {
        if(!root)
            return 0;
        if(!root->left && !root->right)   //Leaf Node
        {
            if(root->data-lower==1 && upper-root->data==1)
                return 1;
            else
                return 0;
                
        }
        return Dead(root->left, lower, root->data) || Dead(root->right, root->data, upper);
    }
  
    bool isDeadEnd(Node *root) {
        // Code here
        int lower = 0, upper = INT_MAX;
        return Dead(root, 0, INT_MAX);
    }
};


int main()
{
    
    
}