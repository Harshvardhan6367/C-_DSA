/*

        1 
      1 2 1 
    1 2 3 2 1 
  1 2 3 4 3 2 1 
1 2 3 4 5 4 3 2 1 
*/
#include<iostream>
using namespace std;
int main()
{
    int row, col;
    for ( row = 1; row <= 5; row++)
    {
        for ( col = 1; col <= 5-row; col++)
        {
            cout<<"  ";
        }
        for ( col = 1; col <= row; col++)
        {
            cout<< col <<" ";
        }
        for ( col = row-1; col >= 1; col--)
        {
            cout<< col<<" ";
        }
        cout<< endl;
        
    }
    
    return 0;
}