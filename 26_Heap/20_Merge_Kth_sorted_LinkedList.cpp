#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

//Linked list Node structure

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};



class Solution {
  public:
  class compare
  {
      public :
      bool operator() (Node* a, Node* b)
      {
          return a->data > b->data;
      }
  };
  
    Node* mergeKLists(vector<Node*>& arr) {
        // Your code here
        
        int n = arr.size();
        //Min Heap
        priority_queue<Node* , vector<Node*>, compare >p(arr.begin(),arr.end());
        
        Node* root = new Node(0);
        Node* tail = root;
        
        Node* temp;
        
        while(!p.empty())
        {
            temp = p.top();
            p.pop();
            tail->next = temp;
            tail = tail->next; 
            if(temp->next)
            p.push(temp->next);
        }
        return root->next;
        
    }
}; 
int main()
{
    
    
}