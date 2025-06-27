#include<iostream>
#include<vector>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

Node *createLinkedList(int arr[], int index, int size)
{
    if(index==size)
    {
        return NULL;
    }
    Node *temp;
    temp = new Node(arr[index]);
    temp->next = createLinkedList(arr,index+1,size);
    return temp;
}

//Reverse Recursion
Node *Reverse(Node*curr, Node*prev)
{
    if(curr==NULL)
        return prev;
    
    Node*fut = curr->next;
    curr->next=prev;
    return Reverse(fut,curr);
}


int main()
{
    Node *Head = NULL;
    int arr[]={1,2,3,4,5};
    Head = createLinkedList(arr,0,5);
    

    //Reverse the node By Resursion
    Head = Reverse(Head,NULL);
    



    //print Node
    while(Head)
    {
        cout<<Head->data<<" ";
        Head = Head->next;
    }

}
