#include<iostream>
using namespace std;
class human
{
    public:
    string name;
    void display()
    {
        cout<<"My name is "<<name<<endl;
    }
};

class youtuber : public virtual human
{
    public:
    int subscribers;
    void work()
    {
        cout<<"My subscribers are  "<<subscribers<<endl;
    }
};

class Engineer : public virtual human
{
    public:
    string specilization;
    void skill()
    {
        cout<<"My name specilization is "<<specilization<<endl;
    }
};

class codeTeacher: public Engineer, public youtuber
{
    public:
    int salary;
    codeTeacher(string name, int subscribers, string specilization, int salary)
    {
        this->name=name;
        this->subscribers=subscribers;
        this->specilization=specilization;
        this->salary=salary;
    }

    void display()
    {
        cout<<name<<" "<<subscribers<<" "<<specilization<<" "<<salary<<endl;
    }
    
};

int main()
{
    codeTeacher sk("S.K.",123, "chomu", 9);

    sk.display();
}