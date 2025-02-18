#include<iostream>
using namespace std;

void prime(int m){
    if(m<2){
        cout<< 0 << endl;
        return ;
    }

    for(int i =2; i<m; i++){
        if(m%i == 0){
            cout<< 0 << endl;
            return ;
        }
    }
    cout<< 1<< endl;
    return ;
}

int fact(int m = 3){         //Defined argument
    int ans = 1;
    for(int i =1; i<=m; i++){
        ans = ans * i;
    }
    return ans;
}

int main()
{
    int a ,b;
    cout<<"Enter number : ";
    cin>> a>> b;

    prime(a);
    
    cout << fact(b);
    cout<< endl;
    cout << fact();
    return 0;
}