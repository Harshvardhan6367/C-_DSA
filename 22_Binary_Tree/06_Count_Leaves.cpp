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

//M1
void CountLeaf(Node *root, int &count)
{
    if(root==NULL)
        return;

    if(!root->left&& !root->right)
    {
        count++; 
        return;
    }
    CountLeaf(root->left,count);
    CountLeaf(root->right,count);
}


//M2
int CountLeaf(Node *root)
{
    if(root==NULL)
        return 0;
    if(!root->left && !root->right)
        return 1;
    return(CountLeaf(root->left)+CountLeaf(root->right));
}

int main()
{
    
    
}