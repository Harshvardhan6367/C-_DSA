#include<iostream>
using namespace std;
class person 
{
    protected:
    string name;

    public:
    void intro()
    {
        cout<<"My name is "<<name<<endl;
    }
};
class Employee : public person
{
    protected:
    int salary;

    public:
    void montlhly_salary()
    {
        cout<<"My monthly salary is "<<salary<<endl;
    }
};
class manager : public Employee
{
    protected:
    string department;

    public:
    manager(string name, int salary, string department)
    {
        this->name = name;
        this->salary = salary;
        this->department = department;
    }
    void display()
    {
        cout<<name<<" "<<salary<<" "<<department<<endl;
    }
    void work()
    {
        cout<<"I am leading department "<< department<<endl;
    }
};
int main()
{
    manager rohit("Rohit", 12345678, "Cyber_Security");
    rohit.display();
    rohit.work();
    
}