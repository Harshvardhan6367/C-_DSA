#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution {
  public:
  
  class Node
  {
      public :
      int freq;
      char c;
      Node *left, *right;
      
      Node(int frequency, char name)
      {
          freq = frequency;
          c = name;
          left = right = NULL;
      }
  };
  
  class comp{
      public :
      bool operator()(Node *a, Node *b)
      {
          return a->freq > b->freq;
      }
  };
  
  void preorder(Node *root, string &temp, vector<string> &ans)
  {
      if(root==NULL)
      return;
      
      if (!root->left && !root->right)
      {
        ans.push_back(temp);
        return;
      }
    
      temp.push_back('0');
      preorder(root->left, temp, ans);
      temp.pop_back();
    
      temp.push_back('1');
      preorder(root->right, temp, ans);
      temp.pop_back();
  }
  
    vector<string> huffmanCodes(string S, vector<int> f, int N) {
        
        // build the Haffman tree
        
        // Build the min Heap(On the basis of frequency)
        priority_queue<Node*, vector<Node *>, comp >pq;
        for(int i=0;i<N;i++)
        {
            Node *root = new Node(f[i],S[i]);
            pq.push(root);
        }
        
        while(pq.size()>1)
        {
            Node *first = pq.top();
            pq.pop();
            Node *second = pq.top();
            pq.pop();
            
            Node *root = new Node(first->freq+second->freq, '$');
            root->left = first;
            root->right = second;
            pq.push(root);
            
        }
        
        
        Node *root = pq.top();
        pq.pop();
        
        // Find preorder
        vector<string>ans;
        string temp;
        preorder(root, temp, ans);
        
        return ans;
    }
};
int main()
{
    
    
}