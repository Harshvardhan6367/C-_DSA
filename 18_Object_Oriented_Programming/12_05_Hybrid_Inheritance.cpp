#include<iostream>
using namespace std;
class student 
{
    public: 
    void print()
    {
        cout<<"I am student\n";
    }
};
class male 
{
    public: 
    void printmale()
    {
        cout<<"I am male\n";
    }
};
class female 
{
    public: 
    void printfemale()
    {
        cout<<"I am female\n";
    }
};
class boy : public student, public male
{
    public: 
    void printboy()
    {
        print();
        cout<<"I am boy\n";
    }
};
class girl : public student, public female
{
    public: 
    void printgirl()
    {
        print();
        cout<<"I am girl\n";
    }
};
int main()
{
    boy b1;
    b1.printboy();
    cout<<endl;
    girl g1;
    g1.printgirl();
}