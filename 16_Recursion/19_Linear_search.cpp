#include<iostream>
using namespace std;
bool Ls(int arr[],int index, int x, int n){
    if(index==n)
        return 0;
    
    if(arr[index]==x)
        return 1;
    return Ls(arr, index+1, x, n);
}
int main()
{
    int arr[]= {1,2,3,4,5,6,7,8,9};
    int n = 9;
    int x;
    cout<<"Enter number";
    cin>>x;
    cout<< Ls(arr, 0, x, n);
}