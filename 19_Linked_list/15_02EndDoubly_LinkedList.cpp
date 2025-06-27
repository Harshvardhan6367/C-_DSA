#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int value)
    {
        data=value;
        next=NULL;
        prev=NULL;
    }
};

int main()
{
    Node*Head = NULL;
    Node*Tail = Head;
    int arr[] = {1,2,3,4,5};
    //Insert at End with an array
    for(int i=0;i<5;i++)
    {
        if(Head==NULL)
        {
            Head=new Node(arr[i]);
            Tail=Head;
        }
        else{
            Node*temp=new Node(arr[i]);
            Tail->next=temp;
            temp->prev=Tail;
            Tail=temp;
        }
    }

    Node *trev=Head;
    while(trev)
    {
        cout<<trev->data<<" ";
        trev=trev->next;
    }

}