#include<iostream>
using namespace std;
int partition(int arr[], int start, int end)
{
    int pos = start;
    for(int i = start; i<=end; i++)
    {
        if(arr[i]<=arr[end])
        {
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos-1;
}
void quickSort(int arr[], int start, int end)
{
    if(start>=end)
        return;
    
    int pivot = partition(arr,start,end);
    // left side
    quickSort(arr,start,pivot-1);
    //right side
    quickSort(arr,pivot+1,end);
}
int main()
{
    int arr[]={6,4,2,8,13,7,11,9,3,6};
    int start=0, end=9;
    quickSort(arr,start,end);
    for (int i = 0; i < 10; i++)
    cout<<arr[i]<<" ";
    
}