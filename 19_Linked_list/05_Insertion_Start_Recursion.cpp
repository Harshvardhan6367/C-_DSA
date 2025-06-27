#include<iostream>
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

Node *createLinkedList(int arr[], int index, int size, Node *prev)
{
    //base case
    if(index==size)
    {
        return prev;
    }

    Node *temp;
    temp = new Node(arr[index]);
    temp->next = prev;
    return createLinkedList(arr,index+1,size,temp); 
}

int main()
{
    Node *Head = NULL;
    int arr[] = {1,2,3,4,5};
    int index=0, size=5;

    Head = createLinkedList(arr,index,size,Head);

    //Print value of node
    Node *temp = Head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    };
    
}