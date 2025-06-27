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
    

    //Middle of linked list
     int count = 0;
        Node * temp = Head;
        while(temp!=NULL)
        {
            count++;
            temp = temp->next;
        }
        count/=2;
        temp=Head;
        while(count--)
        {
            temp=temp->next;
        }
        cout<< temp->data<<endl;
    



    //print Node
    while(Head)
    {
        cout<<Head->data<<" ";
        Head = Head->next;
    }

}
