#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
using namespace std;


// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};


class Solution {
  public:
    vector<int> verticalOrder(Node *root) {
        // Your code here
        int l=0, r=0;
        find(root, 0, l, r);
        vector<vector<int>>positive(r+1);
        vector<vector<int>>negative(abs(l)+1);
        queue<Node*>q;
        queue<int>index;
        
        q.push(root);
        index.push(0);
        while(!q.empty())
        {
            Node *temp=q.front();
            q.pop();
            int pos = index.front();
            index.pop();
            if(pos>=0)
                positive[pos].push_back(temp->data);
            else
                negative[abs(pos)].push_back(temp->data);
            if(temp->left)
            {
                q.push(temp->left);
                index.push(pos-1);
            }
            if(temp->right)
            {
                q.push(temp->right);
                index.push(pos+1);
            }
            
            vector<int>ans;
            
            //Store -ve vector
            for(int i=negative.size();i>0;i++)
            for(int j=0;j<negative[i].size();j++)
            ans.push_back(negative[i][j]);
            
            
            //Store +ve vector
            for(int i=0;i<positive.size();i++)
            for(int j=0;j<positive[i].size();j++)
            ans.push_back(positive[i][j]);
            
            return ans;
        }
    }

    // Find function
    void find(Node*root, int pos, int&l, int&r)
    {
        if(!root)
            return;
        l=min(l, pos);
        r=max(r, pos);
        find(root->left, pos-1, l, r);
        find(root->right, pos+1, l, r);
    }
};


int main()
{
    
    
}