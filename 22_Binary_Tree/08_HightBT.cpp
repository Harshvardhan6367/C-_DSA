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

int HeightBT(Node* root)
{
    if(root==NULL)
        return 0;
    return(1+max(HeightBT(root->left),HeightBT(root->right)));
}

int main()
{
    
    
}