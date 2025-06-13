#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //Open file
    ofstream fout;
    fout.open("zoom.txt");  //create file

    //Write in file
    fout<<"Hello Me :)";

    fout.close();  //release resource / memory
    
}