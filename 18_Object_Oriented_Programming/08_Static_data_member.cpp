#include<iostream>
using namespace std;
class customer
{
    string name;
    int account_number, balance;
    static int Total_customer;
    static int Total_balanace;

    public:
    customer(string name, int account_number, int balance)
    {
        this-> name = name;
        this->account_number = account_number;
        this->balance = balance;
        Total_customer++;
        Total_balanace+= balance;
    }

    void display()
    {
        cout << name<<" "<< account_number<< " "<< balance<<" "<<Total_customer<<" "<<Total_balanace<<endl;
    }

    void display_total()
    {
        cout<<Total_customer<<endl;
    }

    void deposit(int amount)
    {
        if(amount>0)
        {
            balance+=amount;
            Total_balanace+=amount;
        }
    }

    void withdraw(int amount)
    {
        if(amount<=balance&&amount>0)
        {
            balance-=amount;
            Total_balanace-=amount;
        }
    }

    //Static member function
    static void acceStatic()
    {
        cout<<"Total number of Customer is "<< Total_customer<<endl;
        cout<<"Total balance is "<< Total_balanace<<endl;
    }
};

int customer :: Total_customer = 0;
int customer :: Total_balanace = 0;

int main()
{
    customer A1("rohan", 1, 233);
    customer A2("rohan", 2, 233);
    customer A3("rohan", 3, 233);
    customer A4("rohan", 4, 233);
    // A1.display();
    // A2.display();
    // A3.display();

    A3.display_total();

    customer A5("rohan", 4, 233);

    A3.display_total();

    customer::acceStatic();
    cout<<endl;

    A1.deposit(500);
    customer::acceStatic();
    cout<<endl;
    
    A2.withdraw(100);
    customer::acceStatic();


}