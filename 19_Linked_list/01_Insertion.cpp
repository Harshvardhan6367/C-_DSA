#include<iostream>
using namespace std;
class Node
{
    public : 
    int data;
    Node * next;

    Node(int value)
    {
        data = value;
        next = NULL;
    };
};
int main()
{
    Node *Head;
    Head = new Node(23);

    cout<<Head->data<< endl;
    cout<<Head->next<<endl;

    if(Head==NULL)
    {
        Head = new Node(13);
    }
    else
    {
        Node *temp;
        temp = new Node(28);
        temp ->next=Head;
        Head=temp;
    }
};