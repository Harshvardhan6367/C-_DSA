/*

1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
*/
#include<iostream>
using namespace std;
int main()
{
    for(int i = 1; i<=5; i++){
        for(int j = 1; j<=5; j++){
            cout<< j <<" ";
        }
        cout<< endl;
    }
    return 0;
}