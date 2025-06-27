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
vector<int> rightview(Node *root) {
        // code here
        vector<int>ans;
        if(!root)
        return ans;
        queue<Node* >q;
        q.push(root);
        
        while(!q.empty())
        {
            int n=q.size();
            ans.push_back(q.front()->data);
            while(n--)
            {
                Node*temp=q.front();
                q.pop();
                if(temp->left)
                    q.push(temp->right);
                if(temp->left)
                    q.push(temp->left);
            }
        }
        return ans;
    }


// Methord 2
void Rview(Node* root, int level, vector<int>&ans)
    {
        if(!root)
            return;
        if(level==ans.size())
            ans.push_back(root->data);
            
        Rview(root->right, level+1, ans);
        Rview(root->left, level+1, ans);
    }
    
vector<int> leftView(Node *root) {
        // code here
        vector<int>ans;
        if(!root)
        return ans;
        
        
        Rview(root, 0, ans);
    }
    
    

int main()
{
    
    
}