#include<iostream>
#include<cmath>  // Include cmath for pow()
using namespace std;

int countDigit(int n){
    int ans = 0;
    while(n){
        ans++;
        n /= 10;
    }
    return ans;
}

void Armstrong(int num, int digit){
    int x = num;
    int ans = 0, rem;
    while(num){
        rem = num % 10;
        num /= 10; 
        ans = ans + pow(rem, digit);
    }
    if(ans == x)  // Compare with the original number x
        cout << 1;
    else
        cout<< 0;
}

int main()
{
    int num;
    cout<< "Enter number : ";
    cin >> num;

    int digit = countDigit(num);

     Armstrong(num, digit);
    return 0;
}