#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node * left, *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};


Node * Insert(Node *root, int target)
{
    if(!root)
    {
        Node *temp = new Node(target);
        return temp;
    }
    if(target<root->data)   // left
        root->left = Insert(root->left, target);
    
    else
        root->right = Insert(root->right, target);

    return root;
}

void inorder(Node *root)
{
    if(!root)
        return;

    //left
    inorder(root->left);
    //Node
    cout<< root->data<<" ";
    //right
    inorder(root->right);
}

bool search(Node *root, int target)
{
    if(!root)
        return 0;
    if(root->data== target)
        return 1;
    if(root->data > target)
        return search(root->left, target);
    else
        return search(root->right, target);
}
int main()
{
    int arr[]= {1,3,5,7,2,4,54,64};
    Node *root = NULL;

    for(int i=0; i<8; i++)
        root = Insert(root, arr[i]);

    inorder(root);
    cout<<endl;


    cout<< search(root, 54)<<endl;
}