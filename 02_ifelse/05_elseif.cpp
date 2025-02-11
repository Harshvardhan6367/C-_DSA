#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number";
    cin>> num;
    if(num>1){
        cout<<"Positive number";
    }
    else if(num < 0){
        cout<< "Negative number";
    }
    else{
        cout<< "0";
    }
}