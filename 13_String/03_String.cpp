#include<iostream>
using namespace std;
int main()
{
    string s="Harsh Vardhan";
    cout<< s<< endl;

    string s1;
    getline(cin, s1);
    cout<< s1<< endl;
    cout<< s1.size()<< endl;

    string s2 = s+s1;
    cout<< s2;



    return 0;
}