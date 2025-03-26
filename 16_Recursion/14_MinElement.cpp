#include<iostream>
using namespace std;
int minEle(int arr[], int index, int n)
{
    if(index==n-1)
        return arr[index];

    return min(arr[index], minEle(arr, index+1, n));
}
int main()
{
    int arr[]={11,22,36,43,5,61,7,8,9};

    cout<<minEle(arr, 0, 9);
}