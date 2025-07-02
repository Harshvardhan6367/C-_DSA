#include<iostream>
#include<vector>
using namespace std;
class Node
{
    public:
    int data;
    Node *left, *right;

    Node(int value)
    {
        data=value;
        left=right=NULL;
    }
};
class Solution {
  public:
    void flatten(Node *root) {
        // code here
        vector<int>ans;
        while(root)
        {
            if(!root->left)
                root = root->right;
            
            else // root->left  exist
            {
                Node* curr = root->left;
                
                while(root->right)
                    curr = curr->right;
                    
                //
                curr->right = root;
                root->left = root->right;
                root->left == NULL;
                root = root->right;
            }
        }
    }
};
int main()
{
    
    
}