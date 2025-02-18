#include<iostream>
using namespace std;
char convert(char name){
    char ans = name - 'a' + 'A';
    return ans;
}
int main()
{
    char alp;
    cout << "Enter alphabate :";
    cin >> alp;
    
    cout<< convert(alp);
    return 0;
}