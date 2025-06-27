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

Node* CreateCircular(Node *Head)
{
    Node*temp = Head;
    while(temp->next)
    {
        temp=temp->next;
    }
    temp->next = Head;
    return Head;
}



int main()
{
    Node *Head = NULL;
    int arr[]={1,2,3,4,5,6};
    Head = createLinkedList(arr,0,6);
    
    //Create circular linked list
    Head = CreateCircular(Head);
   
        


    //print Node
    int count = 10;
    while(count--)
    {
        cout<<Head->data<<" ";
        Head = Head->next;
    }

}
