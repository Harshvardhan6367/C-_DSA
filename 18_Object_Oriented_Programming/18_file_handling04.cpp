#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;

    fout.open("z1.txt");
    fout<<"Me to baap coder hu\n";
    fout<<"Papa hu me Papa\n";
    fout<<"Puri duniya ka papa\n";
    fout<<"Mera naam hai Jack-The billa\n";
    fout<<"Taki Taki :>>\n";
    fout.close();

    ifstream fin;
    fin.open("z1.txt");

    string line;

    while(getline(fin,line))
    {
        cout<<line<<endl;
    }
    fin.close();
}