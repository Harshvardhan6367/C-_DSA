#include<iostream>
#include<vector>
#include<queue>
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
    cout<<"Enter the Right child of "<<x<<" : ";
    temp->right = BinaryTree();
    return temp;
}

void preOrder(Node *root)  //Node---> Left---> Right
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void InOrder(Node *root)  //left---> Node---> Right
{
    if(root==NULL)
        return;

    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}
void postOrder(Node *root)  // Left---> Right---> Node
{
    if(root==NULL)
        return;

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}


vector<int> LevelOrder(Node *root)
{
    queue <Node *>q;
    q.push(root);
    vector<int>ans;
    Node *temp;
    while(!q.empty())
    {
        temp=q.front();
        q.pop();
        ans.push_back(temp->data);
        if(temp->left)
            q.push(temp->left);
        else
            q.push(temp->right);
    }
    return ans;
}
int main()
{
    Node *root;
    int arr[]={1,2,3,4,-1,-1,3,-1,-1,3,7,-1,-1,5,-1,-1};

    cout<<"Enter Root Node : ";
    
    root = BinaryTree();
    
    cout<<"PreOrder :\n";
    preOrder(root);

    cout<<"InOrder :\n";
    InOrder(root);

    cout<<"PostOrder :\n";
    postOrder(root);
    

    
}