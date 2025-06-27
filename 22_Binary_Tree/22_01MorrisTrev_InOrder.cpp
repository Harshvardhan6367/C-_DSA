#include<iostream>
#include<vector>
using namespace std;

//Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};
class Solution {
  public:
    vector<int> inOrder(Node* root) {
        // code here
        vector<int>ans;
        while(root)
        {
            if(!root->left)
            {
                ans.push_back(root->data);
                root = root->right;
            }
            else    // Root Ka left exist karta hai
            {
                Node *curr = root->left;
                while(curr->right && curr->right != root)
                {
                    curr= curr->right;
                }
                
                //Right most leaf == NULL --> Not Treversed.
                if(curr->right == NULL)
                {
                    curr->right = root;
                    root = root->left;
                } 
                else    //Right most leaf == root --> Treversed.
                {
                    curr->right = NULL;
                    ans.push_back(root->data);
                    root = root->right;
                }
            }
        }
        return ans;
    }
};


int main()
{
    
    
}