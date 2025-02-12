/*

a a a a a 
b b b b b
c c c c c
d d d d d
e e e e e
*/
#include<iostream>
using namespace std;
int main()
{
    int i, j;
    for(i = 1; i<=5; i++){
        for(j = 1; j<=5; j++){
            char name = 'a'+i-1;            // 'a'[98]  - (i-1)    ----> 98-(1-1);   98-(2-1); ______________ as Typecasting
            cout<< name <<" ";
        }
        cout<< endl;
    }
    return 0;
}