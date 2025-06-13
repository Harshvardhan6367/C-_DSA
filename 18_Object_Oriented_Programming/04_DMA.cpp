#include<iostream>
using namespace std;
class student
{
    public :
    string name;
    int roll_no , age;
    string grade;
};
int main()
{
    student *s1 = new student;
    (*s1).name = "Harsh";
    s1 -> name = "Harsh";

    cout<< s1-> name << endl;
    cout<< (*s1).name;
     
}