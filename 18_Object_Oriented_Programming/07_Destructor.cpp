#include<iostream>
using namespace std;
class customer
{
    string name;
    int *balance;
    public:
    //constructor
    customer(string name)
    {
        this->name = name;
        cout<< "Constructor is "<< name<<endl;
        
    }

    customer()
    {
        name = "4";
        cout<<"Constructor is "<< name<< endl;
    }

    //destructor (create only once)
    ~customer()
    {
        cout<<"destructor is "<<name<<endl;
    }
};
int main()
{
    customer A1("1"), A2("2"), A3("3"); 
    customer * A4 = new customer;
    delete A4;
}