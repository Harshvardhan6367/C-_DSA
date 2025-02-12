/*

        1 
      2 2 
    3 3 3 
  4 4 4 4 
5 5 5 5 5 
*/
#include<iostream>
using namespace std;
int main()
{
    int row, col, n;
    cout<<"Enter number to print pattern :";
    cin>> n;
    for(row = 1; row<=n; row++){
        for(col = 1; col<= n-row; col++){
            cout<<"  ";
        }
        for(col= 1; col<=row; col++){
            cout<< row <<" ";
        }
        cout<<endl;
    }
    return 0;
}