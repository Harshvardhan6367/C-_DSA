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

    //Insert at start
    if(Head==NULL)
    {
        Head=new Node(5);
    }
    else{
        Node*temp = new Node(5);
        temp->next = Head;
        Head->prev=temp;
        Head = temp;
    }

    Node *trev=Head;
    while(trev)
    {
        cout<<trev->data<<" ";
        trev=trev->next;
    }

}