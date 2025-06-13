#include<iostream>
using namespace std;
class customer
{
    string name;
    int account_number;
    int balance;

    public:
    customer()                                   //default construction
    {
        cout<<"Construction is called"<<endl;
    }
    
    //parametrized construction
    
    customer(string name, int account_number, int balance)
    {
        this-> name = name;
        this-> account_number= account_number;
        this-> balance = balance;
    }

    // Construction overloding ---> diffrent parameters
    customer(string a, int b)
    {
        name = a;
        account_number = b;
    }

    void display()
    {
        cout<<name<<" "<< account_number<<" "<< balance<<endl;
    }

    //Copy constructor
    customer(customer &B)
    {
        name = B.name;
        account_number = B.account_number;
        balance = B.balance;
    }
};
int main()
{
    customer A1("Harsh", 247393, 5000);
    customer A3("mohan", 123); 
    customer A4(A3);
    // customer A2;
    A1.display();
    A3.display();
    A4.display();

    customer A5;
    A5 = A3;
    A5.display();
}