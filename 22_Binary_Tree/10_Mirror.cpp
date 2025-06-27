#include<iostream>
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

void mirror(Node* root) {
        // code here
        if(!root)
            return ;
        Node *temp = root->right;
        root->right = root->left;
        root->left = temp;
        
        mirror(root->left);
        mirror(root->right);
    }
int main()
{
    
    
}