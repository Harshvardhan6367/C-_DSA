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

Node *Reverse(Node*curr,Node*prev)
    {
        if(curr==NULL)
            return prev;
        
        Node*front=curr->next;
        curr->next=prev;
        return Reverse(front,curr);
    }


int main()
{
    Node *Head1 = NULL, *Head2=NULL;
    int arr1[]={1,2,3,4};
    int arr2[]={1,2,3,4,5};
    Head1 = createLinkedList(arr1,0,4);
    Head2 = createLinkedList(arr2,0,5);
    
    //Add 2 Linked lists

        Node*first=Head1,*second=Head2;
        first=Reverse(first,NULL);
        second=Reverse(second,NULL);
        Node*curr1=first, *curr2=second;
        Node*Head=new Node(0);
        Node*Tail=Head;
        int sum,carry=0;
        while(curr1 && curr2)
        {
            int sum=curr1->data+curr2->data+carry;
            Tail->next=new Node(sum%10);
            Tail=Tail->next;
            curr1=curr1->next;
            curr2=curr2->next;
            carry=sum/10;
        }
        while(curr1)
        {
            int sum=curr1->data+carry;
            Tail->next=new Node(sum%10);
            Tail=Tail->next;
            curr1=curr1->next;
            carry=sum/10;
        }
        while(curr2)
        {
            int sum=curr2->data+carry;
            Tail->next=new Node(sum%10);
            Tail=Tail->next;
            curr2=curr2->next;
            carry=sum/10;
        }
        while(carry)
        {
            Tail->next=new Node(carry%10);
            carry/=10;
        }
        Head=Reverse(Head->next,NULL);
        
    
    
        


    //print Node
    int count = 10;
    
    while(count--)
    {
        cout<<Head->data<<" ";
        Head = Head->next;
    }

}