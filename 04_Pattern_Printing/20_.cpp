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
    int row, col, n;
    cout<<"Enter * to print pattern :";
    cin>> n;
    for ( row = 1; row <= n; row++)
    {
        for ( col = 1; col <= n-row; col++)
        {   // print spaces
            cout<<"  ";
        }
        for ( col = 1; col <= row; col++)
        {    // print star
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}