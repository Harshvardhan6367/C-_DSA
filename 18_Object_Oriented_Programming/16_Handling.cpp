#include<iostream>
using namespace std;
int main()
{
    try{

        int *p = new int[10000000000000];
        cout<<"Memory allocated sucessfully\n";
        delete []p;
    } 
    catch(const exception &e)
    {
        cout<<"Exception Occured : "<<e.what()<<endl;
    }
    
}