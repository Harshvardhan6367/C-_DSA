#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;

    Node(int value)
    {
        data=value;
        next=NULL;
    }
};

class Queue
{
    Node* front;
    Node* rear;

    public:
    Queue()
    {
        front=rear=NULL;
    };
    bool IsEmpty()
    {
        return front==NULL;
    }
    void push(int x)
    {
        if(IsEmpty())
        {
            front = new Node(x);
            cout<<"Popped "<<x<<" in queue\n";
            rear=front;
            return;
        }
        else{
            rear->next = new Node(x);
            cout<<"Popped "<<x<<" in queue\n";
            rear=rear->next;
        }
    }
    void pop()
    {
        if(IsEmpty())
        {
            cout<<"Queue Underflow\n";
            return ;
        }
        else{
            Node*temp = front;
            front=front->next;
            delete temp;
        }
    }
    int start()
    {
        if(IsEmpty())
        {
            cout<<"Queue is Empty\n";
            return -1;
        }
        else{
            return front->data;
        }
    }
};
int main()
{
    Queue q;

    q.push(4);
    q.push(34);
    q.push(488);

    cout<<q.start()<<endl;
}