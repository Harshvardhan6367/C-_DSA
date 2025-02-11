#include<iostream>
using namespace std;

int main(){
    int num, pow, n;
    cout <<"Enter the number : ";
    cin>> num;
    cout <<"Enter the power : ";
    cin>> pow;
    n = num;
    for(int i = 1; i<pow; i++){
        num = num * n;
    }
    cout<< num;
}