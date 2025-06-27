#include<iostream>
using namespace std;
// Implement Queue as an array
class queue
{
    int *arr;
    int front, rear;
    int size;
    public:
    queue(int n)
    {
        arr=new int[n];
        front=rear=-1;
        size=n;
    }
    bool IsEmpty()
    {
        return front==-1;
    }
    bool IsFull()
    {
        return rear== size-1;
    }
    void push(int x)
    {
        if(IsEmpty())
        {
            front=rear=0;
            arr[0]=x;
        }
        else if(IsFull())
        {
            cout<<"Queue Overload"<<endl;
            return;
        }
        else{
            rear=rear+1;
            arr[rear]=x;
        }
    }
    void pop()
    {
        if(IsEmpty())
        {
            cout<<"Queue Underflow"<<endl;
            return;
        }
        else{
            if(front==rear)
                front=rear=-1;
            else    
                front=front+1;
        }
    }
    int start()
    {
        if(IsEmpty())
        {
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
};
int main()
{
    queue q1(6);
    q1.push(3);
    q1.pop();
    cout<<q1.start();
}