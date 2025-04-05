#include<iostream>
using namespace std;
int Sumsub(int arr[],int index, int n,int sum)
{
    if(sum==0)
    return 1;
    if(index==n || sum<0)
    return 0;

    return Sumsub(arr,index+1,n,sum) + Sumsub(arr,index,n,sum-arr[index]);
}
int main()
{
    int arr[]={2,3,4};
    int target = 6;
    
    cout<< Sumsub(arr,0,3,target);
}