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
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    Head = createLinkedList(arr,0,10);
    

    //Rotate Node K times:
    int k = 2;


    // if(Head==NULL||Head->next==NULL)       ----->Edge cases
    //         return Head;

        int count=0;
        
        Node*temp=Head;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        k=k%count;
        // if(k==0)                        ------>Edge cases
        //     return Head;

        count-=k;
        
        Node *curr=Head, *prev=NULL;
        while(count--)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next=NULL;
        
        Node*tail=curr;
        while(tail->next!=NULL)
        {
            tail=tail->next;
        }
        tail->next=Head;
        Head=curr;
        
   
        
        



    //print Node
    while(Head)
    {
        cout<<Head->data<<" ";
        Head = Head->next;
    }

}
