#include<iostream>
using namespace std;
void rotateClockwise(string &s){
    char ch = s[s.size()-1];
    int index=s.size()-2;
    while(index>=0){
        s[index+1] = s[index];
        index--;
    }
    s[0]=ch;
}
void rotateAnticlockwise(string &s){
    char ch = s[0];
    int index=1;
    while(index<s.size()){
        s[index-1] = s[index];
        index++;
    }
    s[s.size()-1]=ch;
}
int main()
{
    string s1="amazon", s2="azonam";
   
    string clockwise, anticlockwise;
        
    clockwise = s1, anticlockwise=s1;
        
    rotateClockwise(clockwise);
    rotateClockwise(clockwise);
    if(clockwise==s2)
            cout<< "Yes";
            
    rotateAnticlockwise(anticlockwise);
    rotateAnticlockwise(anticlockwise);
    if(anticlockwise==s2)
            cout<< "Yes";
        
    cout<<"No";
return 0;
}

