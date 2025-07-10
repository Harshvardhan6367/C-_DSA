#include<iostream>
#include<vector>
using namespace std;

// User function Template for C++

struct Node {
    int data;
    Node *left, *right;
};

class Solution {
  public:
  void inorder(Node *root, vector<int>&ans)
  {
      if(!root)
      return;
      
      inorder(root->left,ans);
      ans.push_back(root->data);
      inorder(root->right,ans);
  }
  
  void postorder(Node *root, vector<int>&ans, int &index)
  {
      if(!root)
      return;
      
      //left 
      postorder(root->left, ans, index);
      //Right 
      postorder(root->right, ans, index);
      //node
      root->data = ans[index];
      index++;
  }
  
    void convertToMaxHeapUtil(Node* root) {
        // Your code goes here
        
        //Inorder Traversal
        vector<int>ans;
        inorder(root, ans);
        
        //post order traversal
        int index=0;
        postorder(root,ans,index); 
        
    }
};
int main()
{
    
    
}