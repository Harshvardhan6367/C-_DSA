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
int main()
{
    Node *Head = NULL;
    int arr[]={1,2,3,4,5};
    Head = createLinkedList(arr,0,5);
    

    //Deletion Perticular Node
    int x = 2;
    if(x==1)
        {
            Node*temp=Head;
            Head=Head->next;
            delete temp;
        }
        else{
            Node*curr = Head;
            Node*prev = NULL;
            x--;
            while(x--)
            {
                prev = curr;
                curr = curr->next;
            }
            prev ->next=curr->next;
            delete curr;
        }
        



    //print Node
    while(Head)
    {
        cout<<Head->data<<" ";
        Head = Head->next;
    }

}
