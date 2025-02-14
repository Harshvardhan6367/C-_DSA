/*

* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        *
        
*/
#include<iostream>
using namespace std;
int main()
{
    int row, col;
    for ( row = 5; row >= 1; row--)
    {
        for ( col = 1; col <= 5-row; col++)
        {
            cout<<"  ";
        }
        for ( col = 1; col <=2*row-1; col++)
        {
            cout<< "* ";
        }
        cout<<endl;
    }
    
    return 0;
}