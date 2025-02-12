/*

        1 
      1 2 
    1 2 3
  1 2 3 4
1 2 3 4 5
*/
#include<iostream>
using namespace std;
int main()
{
    int row, col, n;
    cout<<"Enter number to print pattern :";
    cin>> n;
    for ( row = 1; row <=n; row++)
    {
        for ( col = 1; col <= n-row; col++)
        {
            cout<<"  ";
        }
        for ( col = 1; col <= row; col++)
        {
            cout<< col << " ";
        }
        cout<<endl;
    }
    
    return 0;
}