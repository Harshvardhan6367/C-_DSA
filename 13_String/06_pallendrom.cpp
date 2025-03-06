#include<iostream>
using namespace std;
void Pallendrom(string s){
    int start=0, end=s.size()-1;
    while(start<end){
        if(s[start]!=s[end]){
            cout<<"No";
            return;
        }
        start++, end--;
    }
     
    cout<<"Yes";
}
int main()
{
    string s1, s2;
    s1= "harsh";
    s2="naman";

    Pallendrom(s1);
    cout<<endl; 
    Pallendrom(s2);

    return 0;
}