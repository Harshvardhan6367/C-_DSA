/*

5 
5 4
5 4 3
5 4 3 2
5 4 3 2 1
*/
#include<iostream>
using namespace std;
int main()
{
    for (int i = 5; i >=1; i--)
    {
        for (int j = 5; j >= i; j--)
        {
            cout<< j <<  " ";                             // also use --> 5-(i-1);
        }
        cout<<endl;
    }
    
    return 0;
}