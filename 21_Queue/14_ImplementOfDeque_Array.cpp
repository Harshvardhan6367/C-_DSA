#include<iostream>
using namespace std;

class Dequeue
{
    int front, rear, size;
    int *arr;

    Dequeue(int n)
    {
        size=n;
        arr= new int[n];
        front = rear=-1;
    }
    bool IsEmpty()
    {
        return front == -1;
    }
    bool IsFull()
    {
        return (rear+1)%size == front;     // Circular array 
    }
    void push_front(int x)
    {
        if(IsEmpty())
        {
            arr[0]=x;
            front = rear =0;
            return;
        }
        else if(IsFull())
        {
            cout<<"Queue Overflow";
            return;
        }
        else{
            front=(front-1+size)%size;
            arr[front]=x;
            return;
        }
    }
    void push_back(int x)
    {
        if(IsEmpty())
        {
            arr[0]=x;
            rear=front = 0;
        }
        else if(IsFull())
        {
            cout<<"Queue Overflow";
            return;
        }
        else
        {
            rear=(rear+1)%size;
            arr[rear]=x;
            return;
        }
    }
    void pop_front()
    {
        if(IsEmpty())
        {
            cout<<"Queue Underflow";
            return;
        }
        else if(front == rear)
        {
            front=rear=-1;
        }
        else{
            front=(front+1)%size;
        }
    }
    void pop_back()
    {
        if(IsEmpty())
        {
            cout<<"Queue Underflow";
            return;
        }
        else if(front == rear)
        {
            front=rear=-1;
        }
        else{
            rear=(rear-1+size)%size;
        }
    }

    int start()
    {
        if(IsEmpty())
            return -1;
        else
            return arr[front];
    }
    int end()
    {
        if(IsEmpty())
            return -1;
        else
            return arr[rear];
    }

};
int main()
{
    
    
}