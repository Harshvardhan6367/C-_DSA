#include<iostream>
#include<iostream>
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
void getSize(Node* root,int &count) {
        // code here
        if(root==NULL)
            return ;
        count++;
        getSize(root->left,count);
        getSize(root->right,count);
}

//M2
int getSize(Node* root) {
        // code here
        if(root==NULL)
            return 0;
        return(1+getSize(root->left)+getSize(root->right));
    }

int main()
{
    
    
}