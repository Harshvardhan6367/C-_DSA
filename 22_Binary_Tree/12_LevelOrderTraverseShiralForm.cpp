#include<iostream>
#include<stack>
#include<vector>
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


vector<int> findSpiral(Node* root) {
        // code here
        stack<Node *>s1;
        stack<Node *>s2;
        
        s1.push(root);
        vector<int>ans;
        while(!s1.empty() || !s2.empty())
        {
            if(!s1.empty())  //Right to left
            {
                while(!s1.empty())
                {
                    Node*temp=s1.top();
                    s1.pop();
                    ans.push_back(temp->data);
                    if(temp->right)
                        s2.push(temp->right);
                    if(temp->left)
                        s2.push(temp->left);
                }
            }
            
            else               //Left to right 
            {
                while(!s2.empty())
                {
                    Node* temp=s2.top();
                    s2.pop();
                    ans.push_back(temp->data);
                    if(temp->left)
                        s1.push(temp->left);
                    if(temp->right)
                        s1.push(temp->right);
                }
            }
        }
            return ans;
    }
int main()
{
    
    
}