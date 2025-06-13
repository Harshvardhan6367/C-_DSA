#include<iostream>
using namespace std;
class customer
{
    string name;
    int age, balance;

    public:
    customer(string a, int b, int c)
    {
        name = a;
        age = b;
        balance= c;
    }

    void deposit(int amount)
    {
        if(amount>0)
        balance+=amount;
        else
        cout<<"invalid command\n";
    }

    void withdraw(int amount)
    {
        if(amount<=balance&&amount>0)
        balance-=amount;
        else
        cout<<"Invalid command\n";
    }

    void display()
    {
        cout<<name<<" "<<age<<" "<<balance<<endl;
    }

};
int main()
{
    customer A1("Harsh", 19, 5000);
    A1.deposit(10000);
    A1.withdraw(300);


    A1.display();
}