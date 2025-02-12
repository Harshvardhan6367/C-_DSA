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
    for(char i = 'a'; i<='e'; i++){
        for(int j = 1; j<=5; j++){
            cout<< i <<" ";
        }
        cout<< endl;
    }
    return 0;
}