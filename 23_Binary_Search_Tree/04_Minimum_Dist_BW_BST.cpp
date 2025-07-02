#include<iostream>
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

void minDist(TreeNode *root, int &prev, int& ans)
{
    if(!root)
        return;
    
    minDist(root->left, prev, ans);
    if(prev!=INT_MIN)
        ans= min(ans, root->val - prev);

    prev = root->val;
    minDist(root->right, prev, ans);
}
    
    int minDiffInBST(TreeNode* root) {
        int prev = INT_MIN;
        int ans = INT_MAX;
        
        minDist(root, prev, ans);
        return ans;
    }
};


int main()
{
    
    
}