#include<iostream>
using namespace std;
class Node
{
    public :
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
int main()
{
    Node *Head = NULL;
    int arr[] = {2,4,6,8,9};

    for(int i=0;i<5;i++)
    {
        if(Head==NULL)
        {
            Head= new Node(arr[i]);
        }
        else{
            Node *tail = Head;
            while (tail->next=NULL)
            {
                tail=tail->next;
            }
            tail->next = new Node(arr[i]);
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