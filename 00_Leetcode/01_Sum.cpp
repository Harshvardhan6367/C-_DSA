#include<iostream>
using namespace std;
int main()
{
    int num = 234 ;
    while(num>9){
            int rem ,ans = 0;
            while(num !=0){
                rem = num % 10;
                ans = rem + ans;
                num/=10;
            }
            num = ans;
        }
        cout << num;
        return num;
    }
