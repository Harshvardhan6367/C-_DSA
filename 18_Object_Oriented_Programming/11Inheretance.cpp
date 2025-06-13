#include<iostream>
using namespace std;
class human
{
    public:
    string name;
    int age, weight;
};
class student : public human
{
    private :
    int fees, roll_no;

    // base class(public) : derived class(public) --> public
    public:
    student (string n, int a, int w, int f, int r)
    {
        name = n;
        age = a;
        weight = w;
        fees = f;
        roll_no= r;
    }
    void display()
    {
        cout<<name<<" "<<age<< " "<<weight<<" "<<fees<<" "<<roll_no<<endl;
    }
};

class teacher : public human{
    int salary, id;
};
int main()
{
    human A1;
    student harsh("Harsh", 19, 65, 45, 23);
    
    harsh.display();

    teacher Diksha_mam;
    Diksha_mam.weight = 69;

    cout<< Diksha_mam.weight;
}