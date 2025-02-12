/*

        a 
      a b 
    a b c 
  a b c d 
a b c d e 
*/
#include<iostream>
using namespace std;
int main()
{   
    int n;
    cout<<"Enter number to print pattern :";
    cin>> n;

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n-row; col++)
        {
            cout<<"  ";
        }
        char ch = 'a';
        for (int col = 1; col <= row; col++)
        {
            cout<< ch <<" ";
            ch++;
        }
        cout<<endl;
    }
    
    return 0;
}