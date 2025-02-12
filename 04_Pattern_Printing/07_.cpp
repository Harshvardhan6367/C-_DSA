/*

1 4 9 16 25 
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
*/
#include<iostream>
using namespace std;
int main()
{
    for(int i = 1; i<=5; i++){
        for(int j = 1; j<=5; j++){
            cout<< j*j <<" ";
        }
        cout<< endl;
    }
    return 0;
}