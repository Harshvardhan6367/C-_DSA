#include<iostream>
using namespace std;

class Node
{
    public:
    int data, height;
    Node *left, *right;

    Node(int value)
    {
        data = value;
        height =1;
        left = right = NULL;
    }
};

int getheight(Node *root)
{
    if(!root)
    return 0;

    return root->height;
};

int getbalance(Node* root)
{
    return getheight(root->left) - getheight(root->right);
};

//Right Rotation     ---> L L
Node *rightRotation(Node *root)
{
    Node *child = root->left;
    Node *childRight = child->right;

    child->right = root;
    root->left = childRight;

    //Update Height
    root->height = 1+max(getheight(root->left), getheight(root->right)); 
    child->height = 1+max(getheight(child->left), getheight(child->right)); 

    return child;
};

//left Rotation    --> R R
Node *leftRotation(Node *root)
{
    Node *child = root->right;
    Node *childLeft = child->left;

    child->left = root;
    root->right = childLeft;

    //Update Height
    root->height = 1+max(getheight(root->left), getheight(root->right)); 
    child->height = 1+max(getheight(child->left), getheight(child->right)); 

    return child;
};


Node* insert(Node *root, int key)
{
    // root does't exist
    if(!root)
        return new Node(key);

    // root exist
    if(key<root->data)       //Left
    root->left = insert(root->left, key);
    else if(key>root->data)  // Right
    root->right = insert(root->right, key);
    else                     // Duplicate elements are not allowed
    return root;


    // Update height
    root->height = 1+max(getheight(root->left), getheight(root->right));

    //Check Balance
    int balance = getbalance(root); 



    //Left Left case
    if(balance>1 && key<root->left->data)
        return rightRotation(root);

    //Right Right case
    else if(balance<-1 && key> root->right->data)
        return leftRotation(root);

    //Left Right case
    else if(balance>1 && key > root->left->data)
    {
        root->left = leftRotation(root->left);
        return rightRotation(root);
    }

    //Right Left case
    else if(balance<-1 && key < root->right->data)
    {
        root->right = rightRotation(root->right);
        return leftRotation(root);
    }

    // No Unbalancing
    else
        return root;

}

void preorder(Node* root)
{
    if(!root)
        return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
};

void inorder(Node* root)
{
    if(!root)
        return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


int main()
{
    //Duplicate element are not allowed

    Node *root = NULL;

    root = insert(root, 10);
    root = insert(root, 50);
    root = insert(root, 90);
    root = insert(root, 100);
    root = insert(root, 5);
    root = insert(root, 95);
    root = insert(root, 70);
    
    // print
    cout<<"Preorder : "<<endl;
    preorder(root);

    cout<<endl;
     
    cout<<"inorder : "<<endl;
    inorder(root);
}