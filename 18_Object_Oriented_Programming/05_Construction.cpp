#include<iostream>
using namespace std;
class customer
{
    string name;
    int account_number;
    int balance;
    int * roi;
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


    // Inline constructor
    // inline customer(string a, int b, int c) : name(a), account_number(b), balance(c) {

    // }

    void display()
    {
        cout<<name<<" "<< account_number<<" "<< balance<<endl;
    }
};
int main()
{
    customer A1("Harsh", 247393, 5000);
    customer A3("mohan", 123); 
    // customer A2;
    A1.display();
    A3.display();
}