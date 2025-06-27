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

    //Deletion Last Node
    if(Head!=NULL)
    {
        if(Head->next==NULL)
        {
            Node *temp = Head;
            Head = NULL;
            delete temp;
        }
        else{
            Node *curr = Head;
            Node *prev = NULL;
            while(curr->next!=NULL)
            {
                prev = curr;
                curr = curr->next;
            }
            delete curr;
            prev->next = NULL;
        }
    }


}