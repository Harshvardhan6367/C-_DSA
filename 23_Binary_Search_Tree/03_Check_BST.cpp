#include<iostream>
#include<vector>
using namespace std;

class Node
{
    public:
    int data;
    Node * left, *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};


class Solution {
  public:
    // Function to check whether a Binary Tree is BST or not.
    
    // Methord1
    void inorder(Node *root, vector<int>&ans)
    {
        if(!root)
            return;
        inorder(root->left, ans);
        ans.push_back(root->data);
        inorder(root->right, ans);
    }
    
    // Methord2
    bool BST(Node* root, int &prev)
    {
        if(!root)
            return 1;
        
        if(! BST(root->left, prev))
            return 0;
            
        if(root->data<=prev)
            return 0;
        prev=root->data;
        
        return BST(root->right, prev);
    }
    
    bool isBST(Node* root) {
        // Your code here
        
        //Methord 2
        int prev = INT_MIN;
        
        return BST(root, prev);
        
        
        
        
        
        
        // Methord 1
        
        
        // vector<int>ans;
        // inorder(root, ans);
        
        // for(int i=1; i< ans.size(); i++)
        // {
        //     if(ans[i]<=ans[i-1])
        //         return 0;
        // }
        // return 1;
    }
};


int main()
{
    
    
    
    


}