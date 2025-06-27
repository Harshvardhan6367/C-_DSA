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

Node *createLinkedList(int arr[], int index, int size)
{
    //base case
    if(index==size)
    {
        return NULL;
    }

    Node *temp;
    temp = new Node(arr[index]);
    temp->next=createLinkedList(arr, index+1, size);
    return temp;
}

int main()
{
    Node *Head = NULL;
    int arr[] = {1,2,3,4,5};
    int index=0, size=5;

    Head = createLinkedList(arr,index,size);

    // Insert node at perticular position
    int x = 3;
    int value = 30;

    Node *temp= Head;
    x--;
    
    while(x--)
    {
        temp=temp->next;
    };

    Node *temp2 = new Node(value);
    temp2->next = temp->next;
    temp->next = temp2;

    //Print value of node
   temp =Head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    };
    
}