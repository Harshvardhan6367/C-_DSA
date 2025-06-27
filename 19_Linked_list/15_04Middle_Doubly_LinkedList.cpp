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

Node *CreateDLL(int arr[], int index, int size, Node *back)
{
    if(index==size)
        return NULL;
    Node *temp = new Node(arr[index]);
    temp->prev=back;
    temp->next=CreateDLL(arr,index+1,size,temp);
    return temp;
}

int main()
{
    Node*Head = NULL;
    Node*Tail = Head;
    int arr[] = {1,2,3,4,5};

    Head = CreateDLL(arr,0,5,NULL);
    

    //Insert at At perticular position;  
    // Edge cases : Insert at Pos=0 OR Insert at Last Node
    int pos ;
    cout<<"Enter The position Of Node\n";
    cin>>pos;



    //Insert at start---> Edge case
    if(pos==0)
    {
        //LinkedList Doesn't exist
        if(Head==NULL)
        {
            Head=new Node(6);
        }
        else{    //LinkedList exists
            Node *temp = new Node(6);
            temp->next=Head;
            Head->prev=temp;
            Head=temp;
        }
    }
    else{
        Node*curr = Head;
        
        //Go to the perticular Node 
        while(--pos)
        {
            curr=curr->next;
        };

        //Insert at Last Node : ---->Edge case
        if(curr->next==NULL)
        {
            Node *temp = new Node(6);
            temp->prev = curr;
            curr->next = temp;
        }
        //Insert at middle
        else{
            Node *temp= new Node(6);
            temp->next=curr->next;
            temp->prev=curr;
            curr->next = temp;
            temp->next->prev=temp;
        }
    }
    

    Node *trev=Head;
    while(trev)
    {
        cout<<trev->data<<" ";
        trev=trev->next;
    }

}