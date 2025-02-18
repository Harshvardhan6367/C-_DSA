#include<iostream>
using namespace std;

bool prime(int m){
    if(m<2)
    return 0;

    for(int i =2; i<m; i++){
        if(m%i == 0)
        return 0;
    }
    return 1;
}

int fact(int m){
    int ans = 1;
    for(int i =1; i<=m; i++){
        ans = ans * i;
    }
    return ans;
}
int main()
{
    int a ,b;
    cin>> a>> b;

    cout << prime(a)<< endl;
    cout << fact(b);
    return 0;
}