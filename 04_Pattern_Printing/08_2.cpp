/*

a b c d e 
a b c d e
a b c d e
a b c d e
a b c d e
*/
#include<iostream>
using namespace std;
int main()
{
    int i, j;
    for(i = 1; i<=5; i++){
        for(j = 1; j<=5; j++){
            char name = 'a'+j-1;            // 'a'[98]  - (j-1)    ----> 98-(1-1);   98-(2-1); ______________
            cout<< name <<" ";
        }
        cout<< endl;
    }
    return 0;
}