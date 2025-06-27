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
    int arr[]={1,2,3,3,2,1};
    Head = createLinkedList(arr,0,6);
    

    //Check Palindrom
     //Count number of nodes
        Node *temp=Head;
        int count = 0;
        while(temp)
        {
            count++;
            temp=temp->next;
        }

        count/=2;
        Node*curr=Head, *prev=NULL;
        while(count--)
        {
            prev=curr;
            curr=curr->next;
        }

        prev->next=NULL;
        Node*fut = NULL;
        prev=NULL;
        while(curr)
        {
            fut=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fut;
        }

        Node *Head1=Head, *Head2 = prev;
        while(Head1)
        {
            if(Head1->data!=Head2->data)
            {
                cout<<"Not a pallendrom"<<endl;
                return 0;
            }
            Head1=Head1->next;
            Head2=Head2->next;
        }
        cout<<"Pallendrom"<<endl;
        
   
        
        



    // //print Node
    // while(Head)
    // {
    //     cout<<Head->data<<" ";
    //     Head = Head->next;
    // }

}
