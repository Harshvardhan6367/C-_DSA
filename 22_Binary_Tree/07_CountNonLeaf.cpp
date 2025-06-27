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
void CountNonLeaf(Node *root, int &count)
{
    if(root==NULL)
    return;

    if(root->left && root->right)
    {
        count++;
        return ;
    }
    CountNonLeaf(root->left,count);
    CountNonLeaf(root->right,count);
}


//M2
int CountNonLeaf(Node *root)
{
    if(root==NULL)
        return 0;
    if(root->left && root->right)
        return 0;
    return(1+CountNonLeaf(root->left)+CountNonLeaf(root->right));
    
}


int main()
{
    
    
}