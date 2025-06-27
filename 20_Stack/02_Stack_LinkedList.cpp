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

class Stack
{
    Node* top;
    int size;
    public :
    Stack()
    {
        top=NULL;
        size=0;
    }
    //Push
    void push(int value)
    {
        Node *temp=new Node(value);
        if(temp==NULL)
        {
            cout<<"Stack Overflow";
            return; 
        }
        temp->next=top;
        top=temp;
        size++;
        cout<<"Pushed "<<value<<" to stack\n";
    }
    //Pop
    void pop()
    {
        if(top==NULL)
        {
            cout<<"Stack Underflow";
        }
        else{
            Node*temp=top;
            cout<<"Popped "<<top->data<<" From stack\n";
            top=top->next;
            delete temp;
            size --;
        }
    }
    //Peek
    int peek()
    {
        if(top==NULL)
        {
            cout<<"Stack is empty";
            return -1;
        }
        else{
            return top->data;
        }
    }
    //IsEmpty
    bool IsEmpty()
    {
        return top==NULL;
    }
    //IsSize
    int IsSize()
    {
        return size;
    }
};
int main()
{
    Stack S;
    S.push(6);
    S.push(36);
    S.push(64);
    S.push(96);
    
    cout<< S.IsSize()<<endl;
    cout<< S.IsEmpty()<<endl;
    cout<< S.peek()<<endl;

}