#include<iostream>
using namespace std;

int main(){
    int fact, num;
    fact = 1;
    cout <<"Enter the number : ";
    cin>> num;
    for(int i = 1; i<=num; i++){
        fact = fact *i;
    }
    cout<< fact;
}