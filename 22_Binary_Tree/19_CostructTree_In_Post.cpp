#include<iostream>
#include<iostream>
#include<vector>
using namespace std;

// Class that contains the logic to build the binary tree


class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
  public:

    // Function to return a tree created from postorder and inoreder traversals.
    Node* buildTree(vector<int> inorder, vector<int> postorder) {
        // code here
        int index = postorder.size() - 1;
        int n = postorder.size() - 1;
        return Tree(inorder, postorder, 0, n, index);
    }
    
    int find(vector<int> &in, int target, int start, int end)
    {
        for(int i=start; i<=end;i++)
        {
            if(in[i]==target)
                return i;
        }
        return -1;
    }
    Node *Tree(vector<int> &in, vector<int> &post, int InStart, int InEnd, int &index) {
        if (InStart > InEnd)
            return NULL;

        Node *root = new Node(post[index]);
        int pos = find(in, post[index], InStart, InEnd);
        index--;

        root->right = Tree(in, post, pos+1, InEnd, index);
        root->left = Tree(in, post, InStart, pos-1, index);

        return root;
    }
};


int main()
{
    
    
}