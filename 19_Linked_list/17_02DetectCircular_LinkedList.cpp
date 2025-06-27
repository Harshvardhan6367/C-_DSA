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

Node* CreateCircular(Node *Head)
{
    Node*temp = Head;
    while(temp->next)
    {
        temp=temp->next;
    }
    temp->next = Head;
    return Head;
}

bool check(vector<Node*>&visited, Node*curr)
    {
        for(int i=0;i<visited.size();i++)
        {
            if(visited[i]==curr)
            return 1;
        }
        return 0;
    }


int main()
{
    Node *Head = NULL;
    int arr[]={1,2,3,4,5,6};
    Head = createLinkedList(arr,0,6);
    
    //Create circular linked list
    Head = CreateCircular(Head);

    //Detect Circular Linked List
    Node*curr = Head;
    vector<Node*>visited;
    while(curr!=NULL)
    {
        if(check(visited,curr)==1)
        {
            cout<<"LinkedList is circular"<<endl;
            break;
        }
        visited.push_back(curr);
        curr=curr->next;
    }
    
        


    //print Node
    int count = 6;
    cout<<Head<<endl;
    while(count--)
    {
        cout<<Head->next<<" ";
        Head = Head->next;
    }

}