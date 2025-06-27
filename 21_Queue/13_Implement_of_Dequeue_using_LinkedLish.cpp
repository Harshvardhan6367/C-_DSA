#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *prev, *next;

    Node(int value)
    {
        data=value;
        prev=NULL;
        next=NULL;
    }
};

class Deque
{
    Node *front, *rear;
    public:
    Deque()
    {
        front = rear =NULL;
    }
    bool IsEmpty()
    {
        return front == NULL;
    }

    void push_front(int x)
    {
        if(front == NULL)
        {
            front = rear = new Node(x);
            return;
        }
        else{
                Node*temp = new Node(x);
                temp->next=front;
                front->prev=temp;
                return;
        }
    }
    void push_back(int x)
    {
        if(front==NULL)
        {
            front=rear= new Node(x);
        }
        else
        {
            Node *temp = new Node(x);
            temp->prev = rear;
            rear->next=temp;
            rear=temp;
            return;
        }
    }
    void pop_front()
    {
        if(front==NULL)
        {
            cout<<"Queue underflow";
            return;
        }
        else{
        Node*temp = front;
        front=front->next;
        front->prev=NULL;
        delete temp;
        if(front)
            front->prev=NULL;
        else
            rear=NULL;
        }
    }
    void pop_back()
    {
        if(front==NULL)
        {
            cout<<"Queue underflow";
            return;
        }
        else{
            Node*temp =rear;
            rear=rear->prev;
            delete temp;
            if(rear)
            rear->next=NULL;
            else
            front==NULL;
        }
    }
    int start()
    {
        if(front==NULL)
        {
            cout<<"Queue does not exist";
            return -1;
        }
        else
            return front->data;
    }
    int end()
    {
        if(front==NULL)
        {
            cout<<"Queue does not exist";
            return -1;
        }
        else{
            return rear->data;
        }
    }

};
int main()
{
    
    
}