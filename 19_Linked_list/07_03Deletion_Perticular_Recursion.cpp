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
    if(index==size)
    {
        return NULL;
    }
    Node *temp;
    temp = new Node(arr[index]);
    temp->next = createLinkedList(arr,index+1,size);
    return temp;
}

Node *deleteNode(Node*curr, int x)
{
    if(x==1)
    {
        Node*temp = curr->next;
        delete curr;
        return temp;
    }
    curr->next = deleteNode(curr->next,x-1);

    return curr;
}
int main()
{
    Node *Head = NULL;
    int arr[]={1,2,3,4,5};
    Head = createLinkedList(arr,0,5);
    

    //Deletion Perticular Node By Recursion
    int x=3;
    Node*curr = Head;
    Head = deleteNode(curr, x);
        



    //print Node
    while(Head)
    {
        cout<<Head->data<<" ";
        Head = Head->next;
    }

}
