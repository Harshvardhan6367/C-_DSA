#include<iostream>
#include<vector>
using namespace std;


  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
public:
TreeNode *BST(vector<int> &preorder, int& index, int lower, int upper)
{
    if(index==preorder.size() || preorder[index]<lower || preorder[index]>upper)
        return NULL;

    TreeNode *root = new TreeNode(preorder[index++]);
    root->left = BST(preorder, index, lower, root->val);
    root->right = BST(preorder, index, root->val, upper);

    return root;
}
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index=0;
        int lower = INT_MIN;
        int upper = INT_MAX;

        return BST(preorder, index, lower, upper);
    }
};
int main()
{
    
    
}