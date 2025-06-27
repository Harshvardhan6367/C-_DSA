#include<iostream>
#include<cmath>
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
int height(Node* root, bool &valid)
    {
        if(!root)
        return 0;
        
        int L = height(root->left, valid);
        int R = height(root->right, valid);
        
        if(abs(L-R)>1)      //abs work as mod make-ve number to +ve.
            valid=0;
        return 1+max(L,R);
    }
    bool isBalanced(Node* root) {
        // Code here
        bool valid = 1;  // Assume That tree is balanced
        height(root,valid);
        return valid;
    }
int main()
{
    
    
}