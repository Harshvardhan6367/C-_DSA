#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter number :";
    cin>> x;
    if(x<2)
        return x;
        int start=1, end=x, mid, ans;
        while(start<=end){
            mid=start+(end-start)/2;
            if(mid==x/mid){
                ans=mid;
                break;
            }
            else if(mid<x/mid){   // -->rightward
                ans=mid;
                start=mid+1;
            }
            else    //(mid*mid>x)    -->leftward
                end=mid-1;
        }

        cout<< ans;
}