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
    // Function to build the tree from given inorder and preorder traversals
     Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
        int index = 0;
        int n = preorder.size() - 1;
        return Tree(inorder, preorder, 0, n, index);
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
    Node *Tree(vector<int> &in, vector<int> &pre, int InStart, int InEnd, int &index) {
        if (InStart > InEnd)
            return NULL;

        Node *root = new Node(pre[index]);
        int pos = find(in, pre[index], InStart, InEnd);
        index++;

        root->left = Tree(in, pre, InStart, pos - 1, index);
        root->right = Tree(in, pre, pos + 1, InEnd, index);

        return root;
    }
};


int main()
{
    
    
}