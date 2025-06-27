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
void Total(Node *root,int &count)
{
    if(root==NULL)
        return ;
    count+=root->data;
    Total(root->left,count);
    Total(root->right,count);
}

// M2
int sumBT(Node* root) {
        // code here
        if(root == NULL)
            return 0;
        return(root->data+sumBT(root->left)+sumBT(root->right));
    }
int main()
{
    
    
}