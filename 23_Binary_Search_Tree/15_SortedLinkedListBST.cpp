#include<iostream>
#include<vector>
using namespace std;


struct LNode { //Linked List
    int data;
    struct LNode* next;
    LNode(int x){
        data = x;
        next = NULL; }
};
struct TNode {   //Tree
    int data;
    struct TNode* left;
    struct TNode* right;
    TNode(int x){
        data=x;
        left=right=NULL; }
}; 
class Solution {
  public:
  
    TNode* BuildBST(vector<int>& Tree, int start, int end)
    {
        if(start>end)
            return NULL;
            
        int mid = start + (end-start+1) /2;
        
        TNode* root = new TNode(Tree[mid]);
        root->left = BuildBST(Tree, start, mid-1);
        root->right = BuildBST(Tree, mid+1, end);
        return root;
    }
  
    TNode *sortedListToBST(LNode *head) {
        // code here
        vector<int>Tree;
        while(head)
        {
            Tree.push_back(head->data);
            head=head->next;
        }
        return BuildBST(Tree, 0, Tree.size()-1);
    }
};


int main()
{
    
    
}