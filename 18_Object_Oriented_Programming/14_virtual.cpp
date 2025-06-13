#include<iostream>
using namespace std;
class animal
{
    public:
    virtual void speak()
    {
        cout<<"huhu\n";
    }
};

class dog : public animal
{
    public:
    void speak()
    {
        cout<<"bark\n";
    }
};
int main()
{
    animal *p;
    p = new dog();
    p->speak();
    
}