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
    for(int i = 1; i<=5; i++){
        for(char j = 'a'; j<='e'; j++){
            cout<< j <<" ";
        }
        cout<< endl;
    }
    return 0;
}