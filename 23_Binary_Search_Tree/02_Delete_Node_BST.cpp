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

// Delete Node
Node *deleteNode(Node *root, int target) {
        // your code goes here
        if(!root)
            return NULL;
        
        if(root->data>target)
        {
            root->left = deleteNode(root->left, target);
            return root;
        }
        else if(root->data<target)
        {
            root->right = deleteNode(root->right, target);
            return root;
        }
        else
            {
                // Leaf Node
                if(!root->left && !root->right)
                {
                    delete root;
                    return NULL;
                }
                
                //1 Child Exist
                  if(!root->left) // Right child exist
                    {
                        Node *temp = root->right;
                        delete root;
                        return temp;
                    }
                    else if(!root->right)  //Left child exist
                    {
                        Node *temp = root->left;
                        delete root;
                        return temp;
                    }
                
                
                //2 chile exist
                else
                {
                    //Find greatest element from left
                    Node *child = root->left;
                    Node *parent = root;
                    
                    //Right most Node tak pauchna hai
                    while(child->right)
                    {
                        parent = child;
                        child = child->right;
                    }
                    
                    if(root!=parent)
                    {
                        parent->right = child->left;
                        child->left = root->left;
                        child->right = root->right;
                        delete root;
                        return child;
                    }
                    else
                    {
                        child->right = root->right;
                        delete root;
                        return child;
                    }
                }
            }
            
    }


int main()
{
    int arr[]= {1,3,5,7,2,4,54,64};
    Node *root = NULL;

    for(int i=0; i<8; i++)
        root = Insert(root, arr[i]);

    inorder(root);
    cout<<endl;
    
    
    deleteNode(root, 54);
    inorder(root);
    cout<<endl;


}