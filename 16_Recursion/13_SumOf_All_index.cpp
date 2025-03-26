#include<iostream>
using namespace std;
// void sum(int arr[], int index)
// {
//     int add=0;
//     if(index==-1)
//     {
//         cout<< add;
//         return ;
//     }
//     add+=arr[index];
//     sum(arr, index-1);
// }

int sum(int arr[], int index, int n)
{
    if(index==n)
    return 0;

    return arr[index]+sum(arr,index+1,n);
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};

    cout<<sum(arr,0,8);

    
}