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




int main()
{
    Node *Head = NULL;
    int arr[]={1,2,3,4,5,6};
    Head = createLinkedList(arr,0,6);
    

    //remove Nth node from the end;
    int count =0, n=3;
        Node*temp = Head;
        //count total Number of Nodes
        while(temp)
        {
            count++;
            temp=temp->next;
        };

        count-=n;     //count = count-n;
        if(count==0)
        {
            temp=Head;
            Head = Head->next;
            delete temp;
            
        }

        Node *curr = Head;
        Node *prev = NULL;

        while(count--)
        {
            prev=curr;
            curr=curr->next;
        }    

        prev->next=curr->next;
        delete curr;

        
        



    //print Node
    while(Head)
    {
        cout<<Head->data<<" ";
        Head = Head->next;
    }

}
