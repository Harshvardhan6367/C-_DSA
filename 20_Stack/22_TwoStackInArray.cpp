#include<iostream>
#include<stack>
using namespace std;
class twoStacks {
  public:
    int *arr;
    int top1,top2;  //top1 & top2 store indexes
    int size;
    twoStacks(int n = 100) {
        arr=new int[n];
        top1=-1;
        top2=n;
        size = n;
    }

    // Function to push an integer into the stack1.
    void push1(int x) {
        // code here
        if(top1+1==top2)
            return ;
        top1++;
        arr[top1]=x;
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
        
        // code here
        if(top2-1==top1)
            return ;
        top2--;
        arr[top2]=x;
    }

    // Function to remove an element from top of the stack1.
        
    int pop1() {
        // code here
        if(top1==-1)
            return -1;
        int element =arr[top1];
        top1--;
        return element;
    }

        
    // Function to remove an element from top of the stack2.
    int pop2() {
        // code here
        if(top2==size)
            return -1;
        int element = arr[top2];
        top2++;
        return element;
    }
};
int main()
{
    

    
    


}