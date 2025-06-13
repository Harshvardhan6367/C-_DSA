#include<iostream>
using namespace std;
class human
{
    protected:
    string name;
    int age, weight;

    public:
    human(string n, int a)
    {
        name =  n;
        age = a;
    }
};
class student : public human
{
    private :
    int fees, roll_no;

    public:
    student (string n, int a, int w, int f, int r) : human(n,a)
    {
        weight = w;
        fees = f;
        roll_no= r;
    }
    void display()
    {
        cout<<name<<" "<<age<< " "<<weight<<" "<<fees<<" "<<roll_no<<endl;
    }
};

int main()
{
    student A("Harsh", 19, 65, 45, 23);
    A.display();
    
}