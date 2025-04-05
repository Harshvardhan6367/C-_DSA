#include<iostream>
using namespace std;
int subset(int arr[],int index,int n,int sum)
{
    if(index==n)
    return sum==0;

    return subset(arr,index+1,n,sum) + subset(arr,index+1,n,sum-arr[index]);

}
int main()
{
    int arr[]={2,5,6,1};
    int index=0,n=4, sum=8;

    cout<< subset(arr,index,n,sum);
    
}