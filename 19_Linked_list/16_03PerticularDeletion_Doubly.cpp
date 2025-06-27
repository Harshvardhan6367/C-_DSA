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
    
    // Delete At Perticular Position
    // Edge cases : Insert at Pos=0 OR Insert at Last Node
    int pos ;
    cout<<"Enter The position Of Node\n";
    cin>>pos;



    //Deletion at start---> Edge case
    if(pos==1 )
    {
        if(Head!=NULL)
    {
        //If only one node exist
        if(Head->next==NULL)
        {
            delete Head;
            Head=NULL;
        }

        //More then one node exist
        Node*temp=Head;
        Head=Head->next;
        delete temp;
        Head->prev=NULL;
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
            curr->prev->next=NULL;
            delete curr;
        }
        //Insert at middle
        else{
            curr->prev->next=curr->next;
            curr->next->prev=curr->prev;
            delete curr;
        }
    }

    
    

    Node *trev=Head;
    while(trev)
    {
        cout<<trev->data<<" ";
        trev=trev->next;
    }

}