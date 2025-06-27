#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node * next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
int main()
{
    Node *Head;
    Head = NULL;
    int arr[]= {1,2,34,4,5};

    for(int i=0;i<5;i++)
    {
        if(Head==NULL)
        {
            Head = new Node(arr[i]);
        }
        else{
            Node *temp;
            temp=new Node(arr[i]);
            temp->next = Head;
            Head = temp;
        }
    }

    //Print value of node
    Node *temp = Head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    };

    
}