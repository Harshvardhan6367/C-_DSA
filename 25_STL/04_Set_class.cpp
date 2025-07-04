#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    int age;
    string name;

    bool operator < (const Person &other)  const{
        return age<other.age;
    }

};
int main()
{
    set<Person>s;
    Person p1, p2, p3;
    p1.age = 12, p1.name = "roni";
    p2.age = 13, p2.name = "sin";
    p3.age = 11, p3.name = "ping";

    s.insert(p1); 
    s.insert(p2); 
    s.insert(p3); 
     
    for(auto it=s.begin(); it!=s.end(); it++)
    {
        // cout<<(*it).age<<" "<<(*it).name<<endl; 
        cout<<it->age<<" "<<it->name<<endl; 
    }

    cout<<endl;
    // Reverse 
    for(auto it=s.rbegin(); it!=s.rend(); it++)
    {
        // cout<<(*it).age<<" "<<(*it).name<<endl; 
        cout<<it->age<<" "<<it->name<<endl; 
    }
}