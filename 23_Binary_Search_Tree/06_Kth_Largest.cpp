#include<iostream>
using namespace std;


struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


// return the Kth largest element in the given BST rooted at 'root'
class Solution {
  public:
  
  void KLargest(Node *root, int& ans, int &k)
  {
      if(!root)
        return;
    
    KLargest(root->right, ans, k);
    
    k--;
    
    if(k==0)
        ans = root->data;
        
    if(k<=0)
        return;
        
    KLargest(root->left, ans, k);
  }
  
    int kthLargest(Node *root, int k) {
        // Your code here
        int ans;
        
        KLargest(root,ans, k);
        
        return ans;
    }
};

int main()
{
    
    
}