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
    int arr[]={1,2,3,4,5};
    Head = createLinkedList(arr,0,5);
    

    //Reverse the node
    vector<int>ans;
        Node *curr = Head, *prev=NULL, *fut=NULL;
        while(curr!=NULL)
        {
            fut = curr->next;
            curr->next= prev;
            prev = curr;
            curr = fut;
        }
        Head = prev;



    //print Node
    while(Head)
    {
        cout<<Head->data<<" ";
        Head = Head->next;
    }

}
