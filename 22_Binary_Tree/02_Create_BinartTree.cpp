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

Node *BinaryTree()
{
    int x;
    // cout<<"Enter Root Node : ";
    cin>>x;

    if(x==-1)
    return NULL;

    Node *temp = new Node(x);
    cout<<"Enter the left child of "<<x<<" : ";
    temp->left = BinaryTree();  //First all left Node create
    cout<<"Enter the Right child of "<<x<<" : 1";
    temp->right = BinaryTree();
    return temp;
}
int main()
{
    cout<<"Enter the root Node ";
    Node* root;
    root = BinaryTree();
    
}