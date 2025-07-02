#include<iostream>
#include<vector>
using namespace std;
// Tree Node
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
    
    void find(Node *root, int n1, int n2, vector<int>&ans)
    {
        if(!root)
            return;
        
        if(root->data>n1 && root->data>n2)
            find(root->left, n1, n2, ans);
        else if(root->data<n1 && root->data<n2)
            find(root->right, n1, n2, ans);
        else
        {
            find(root->left, n1, n2, ans);
            ans.push_back(root->data);
            find(root->right, n1, n2, ans);
        }
    }
  
  
    vector<int> printNearNodes(Node *root, int low, int high) {
        // code here
        vector<int>ans;
        find(root, low, high, ans);
        return ans;
    }
};


int main()
{
    
    
}