#include<iostream>
using namespace std;
class Human
{
    protected:
    string name;
    int age;

    Human(string name, int age)
    {
        this->name=name;
        this->age=age;
    }
};
class student : public Human
{
    public:
    int roll_no, fees;

    student(string name,int age, int roll_no,int fees) : Human( name,  age)
    {
        this->name=name;
        this->age=age;
        this->roll_no=roll_no;
        this->fees=fees;
    }
    void display()
    {
        cout<<name<<" "<<age<<" "<<roll_no<<" "<<fees<<endl;
    }
};
int main()
{
    student S1("Bob", 34, 45, 5678);
    S1.display();
    
}