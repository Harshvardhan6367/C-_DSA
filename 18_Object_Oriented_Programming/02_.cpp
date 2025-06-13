#include <iostream>
using namespace std;
class Student
{
    private :
    string name;
    int age, roll_no;
    string grade;

    // Function - Setter and Getter;
    public :
    void setname(string n)
    {
        name = n;
    }
    void setage(int a)
    {
        age = a;
    }
    void setroll(int r)
    {
        roll_no = r;
    }
    void setgrade(string g)
    {
        grade = g;
    }

    void getname()
    {
        cout<< name<<" ";
    }
    void getage()
    {
        cout<< age<<" ";
    }
    void getroll()
    {
        cout<< roll_no<<" ";
    }
    void getgrade()
    {
        cout<< grade<<endl;
    }
    int getage_()
    {
        return age;
    }
    string get_garde(int pin)
    {
        if(pin == 6367)
        {
            return grade;
        }
        return "invalid pin";
    }
};
int main()
{
    Student S1;
    S1.setname("harsh");
    S1.setage(18);
    S1.setroll(023);
    S1.setgrade("A++");

    

    S1.getname();
    S1.getage();
    S1.getroll();
    S1.getgrade();
    

    cout<< S1.getage_()<<endl;
    cout<< S1.get_garde(1234)<<endl;
    cout<< S1.get_garde(6367)<<endl;
}