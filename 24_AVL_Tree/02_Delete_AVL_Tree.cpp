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



Node* deleteNode(Node* root, int key) {
    // add code here,
    if(!root)
        return 0;
    
    if(key<root->data)   //left side
        root->left = deleteNode(root->left, key);
    else if(key>root->data)  //right side
        root->right = deleteNode(root->right, key);
    else{
        
        //Leaf Node
        if(!root->left && !root->right)
        {
            delete root;
            return NULL;
        }
        
        //Only one child exist
        else if(root->left && !root->right)  //Left child exist
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else if(!root->left && root->right)
        {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        //Both child exist
        else 
        {
            Node *curr = root->right;
            while(curr->left)
            {
                curr = curr->left;
            }
            
            root->data = curr->data;
            root->right = deleteNode(root->right, curr->data);
            
            
        }
    }
    
    //Update height
    root->height = 1+max(getheight(root->left), getheight(root->right));
    
    //Check the balance
    int balance = getbalance(root);
    
    //left side
    if(balance>1)
    {
        // L L
        if(getbalance(root->left)>=0)
         return rightRotation(root);
        
        //L R
        else{
            root->left = leftRotation(root->left);
            return rightRotation(root);
        }
    }
    //right side
    else if(balance<-1)
    {
        // R R
        if(getbalance(root->right)<=0)
         return leftRotation(root);
        // R L
        else
        {
            root->right = rightRotation(root->right);
            return leftRotation(root);
        }
    }
     else
     return root;
}
int main()
{
    
    
}