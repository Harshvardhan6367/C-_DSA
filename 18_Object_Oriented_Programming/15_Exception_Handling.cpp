#include<iostream>
using namespace std;
class customer
{
    string name;
    int balance, acc_no;

    public:
    customer(string name, int balance, int acc_no)
    {
        this->name=name;
        this->balance=balance;
        this->acc_no=acc_no;
    }
    void deposit(int amount)
    {
        if(amount>0)
        {
            balance+=amount;
            cout<<amount<<" rs is deposited sucessfully\n";
        }
        else 
        {
            throw runtime_error ("amount should be greater then zero\n");
        }
    }

    void withdraw(int amount)
    {
        if(amount<balance&&amount>0)
        {
            balance+=amount;
            cout<<amount<<" rs is withdraw sucessfully\n";
        }
        else if(amount<0)
        {
            throw runtime_error("amount should be greater then zero\n");
        }
        else
        {
            throw runtime_error( "Insufficient balance\n");
        }
    }
};
int main()
{
    customer A1("Rohit", 5000, 98);

    try{
        A1.deposit(500);
        A1.withdraw(100);
        A1.withdraw(6000);
    }
    catch(const runtime_error &e)
    {
        cout<<"Exception occured : "<<e.what()<<endl;
    }
    
}