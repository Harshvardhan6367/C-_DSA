#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;

    //open file
    fin.open("zoom.txt");
    
    //Read file
    char c;
    c= fin.get();
    while(!fin.eof())
    {
        cout<<c;
        c = fin.get();
    };

    fin.close();         
}