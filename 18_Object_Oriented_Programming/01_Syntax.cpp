#include <iostream>
#include <string>
using namespace std;
class Student
{
    public :
    string name;
    int age, roll_no;
    string grade;
};
int main()
{
    Student S1;
    S1.name = "Harsh";
    S1.age = 18;
    S1.roll_no = 23;
    S1.grade = "A++";

    Student S2;
    S2.name = "Mohit";
    S2.age = 19;
    S2.roll_no = 73;
    S2.grade = "A++";

    cout << S1.name << " ";
    cout << S1.age << " ";
    cout << S1.roll_no << " ";
    cout << S1.grade << endl;

    cout << S2.name << " ";
    cout << S2.age << " ";
    cout << S2.roll_no << " ";
    cout << S2.grade << endl;
}