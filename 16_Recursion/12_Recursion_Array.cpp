#include<iostream>
using namespace std;
void print(int arr[],int n)
{
    if(n==0)
    {
        cout<<arr[n]<<" ";
        return;
    }

    print(arr, n-1);
    cout<<arr[n]<<" ";

}
int main()
{
    int arr[]={1,2,3,4,5,6};
    print(arr,5);
}