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
    

    //Middle of linked list by concept of Slow pointer and fast pointer...
        Node* slow= Head; 
        Node* fast= Head; 
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow= slow->next;
            fast= fast->next->next;
        }
        cout<< slow->data<<endl;
    



    //print Node
    while(Head)
    {
        cout<<Head->data<<" ";
        Head = Head->next;
    }

}
