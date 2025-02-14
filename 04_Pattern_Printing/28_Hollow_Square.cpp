/*

* * * * * * * * 
* * *     * * *
* *         * *
*             *
*             *
* *         * *
* * *     * * *
* * * * * * * *

*/
#include<iostream>
using namespace std;
int main()
{
    int row, col, n ;     // for n type of star pattern replace // 4 by n // 8 by 2n.
    for ( row = 4; row >=1; row--)
    {
        for ( col = 1; col <= row ; col++)
        {
            cout<<"* ";
        }
        for ( col = 1; col <=8-2*row; col++)
        {
            cout<<"  ";
        }
        for ( col = 1; col <= row; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for ( row = 1; row <= 4; row++)
    {
        for ( col = 1; col <= row; col++)
        {
            cout<< "* ";
        }
        for ( col = 1; col <= 8-2*row; col++)
        {
            cout<< "  ";
        }
        for ( col = 1; col <= row; col++)
        {
            cout<< "* ";
        }
        cout << endl;
    }
    
    
    return 0;
}