#include<iostream>
using namespace std;
void fun(int **p)
{
    *p=*p+1;
}

int main()
{
    int n=10;
    int *p1=&n;            //single pointer  
    int **p2=&p1;          //Double pointer  
    int ***p3=&p2;         //Triple pointer  
    int ****p4=&p3;       //four


    cout<<p1<<endl;         //adddress of n (value at p1)
    cout<<&n<<endl;        //adddress of n (value at p2)
    cout<<p2<<endl;        //adddress of p1 (value at p2)
    cout<<&p1<<endl;        //adddress of p1 (value at p2)
    cout<<*p1<<endl;       //value at n  (Derefrence of p1)
    cout<<**p2<<endl;     //value at n (value of n)
    
    *p1=*p1+5;
    cout<<n<<endl;
    **p2=**p2+5;
    cout<<n<<endl<<endl;

    cout<<p1<<endl;
    fun(p2); 
    cout<<p1<<endl;
}