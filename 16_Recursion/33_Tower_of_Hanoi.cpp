#include<iostream>
#include<cmath>
using namespace std;
void Toh(int n,int sour, int help, int dest)
    {
        if(n==1)
        {
            cout<<"move disk "<<n<<" from rod "<<sour<<" to rod "<<dest<<endl;
            
            return;
        }
        Toh(n-1,sour,dest,help);
        cout<<"move disk"<<n<<" from rod "<<sour<<" to rod "<<dest<<endl;
        Toh(n-1,help,sour,dest);
        
    }
int main()
{
    int n, source,help, destination;
    n=3;
    source=1,help=2, destination=3;
    Toh(n,source,help,destination);

    cout<< "Total steps are : "<<pow(2,n)-1;
}