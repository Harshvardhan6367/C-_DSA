#include<iostream>
using namespace std;
// Structure of node
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution {
  public:
  int Count(Node *root)
  {
      if(!root)
      return 0;
      
      return 1+Count(root->left)+Count(root->right);
  }
  
  bool CBT(Node*root, int index, int total_nodes)
  {
      if(!root)
      return 1;
      
      if(index>=total_nodes)
      return 0;
      
      return CBT(root->left,2*index+1,total_nodes) && CBT(root->right,2*index+2,total_nodes);
      
      //left sie CBT
      //Right side CBT
      
  }
  
  bool MaxHeap(Node *root)
  {
      // One node exist atleast
      if(root->left)
      {
        if(root->data < root->left->data)
        return 0;
        
        if(!MaxHeap(root->left)) 
        return 0;
          
      }
      
      if(root->right)
      {
        if(root->data < root->right->data)
        return 0;
        
        return MaxHeap(root->right) ;
          
      }
      
      return 1;
  }
  
    bool isHeap(Node* tree) {
        // code here
        
        //Count node in the Tree
        int num = Count(tree);
        //CBT hai ya nhi
        if(CBT(tree,0,num))
        return 0;
        // Every parent>=child --->Max Heap
        return MaxHeap(tree);
    }
};
int main()
{
    
    
}