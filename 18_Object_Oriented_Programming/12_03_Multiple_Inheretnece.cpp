#include<iostream>
using namespace std;
class person
{
    public : 
    string name;

    void intro()
    {
        cout<< "my name is " <<name<<endl;
    }
    person()
    {
        cout<<"Hello person\n";
    }
};

class teacher
{
    public :
    string Specilization;

    void work()
    {
        cout<<"My specilization is "<< Specilization<<endl;
    }
    teacher()
    {
        cout<<"hello teacher\n";
    }
};

class youtube 
{
    public :
    int subscribers;

    void contentcreater()
    {
        cout<<"My subscriber base is "<< subscribers;
    }
    youtube()
    {
        cout<<"hello youtuber\n";
    }
};

class codeTeacher : public person, public teacher, public youtube
{
    public: 
    codeTeacher(string name, string Specilization, int subscribers)
    {
        this->name = name;
        this->Specilization = Specilization;
        this->subscribers = subscribers;
    }

    void showcase()
    {
        intro();
        work();
        contentcreater();
    }
    codeTeacher()
    {
        cout<<"Hello coder\n";
    }
};
int main()
{
    // codeTeacher sk("S.K.", "Creepy", 23);
    // sk.showcase();
    cout<<endl;
    codeTeacher A2;
}