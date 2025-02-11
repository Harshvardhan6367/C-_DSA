/*
4.Ticket Price Calculator: Create a program that asks the user for their age and checks
  if they qualify for a discounted ticket price (e.g., under 12 and over 65 get discounts), 
  If they are eligible print “YES” else “NO”.
*/

#include<iostream>
using namespace std;

int main(){
    int age;
    cout<< "Enter your age to check discount";
    cin>> age;

    if(age<= 12){
        cout<< "YES";
    }
    else{
        cout<< "NO";
    }
}