#include<iostream>
using namespace std;

void Heapify(int arr[], int index, int n)
{
    int largest= index;
    int left = 2*index+1;
    int right = 2*index+2;

    if(left<n && arr[left]>arr[largest])
        largest=left;
    if(right<n && arr[right]>arr[largest])
        largest = right;
    
    if(largest!=index)
    {
        swap(arr[index], arr[largest]);
        Heapify(arr,largest,n);
    }
}
void BuildMaxHeap(int arr[], int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        Heapify(arr, i, n);
    }
}

void printHeap(int arr[], int size)
{
    for(int i=0; i<size; i++)
    cout<<arr[i]<<" ";

    cout<<endl;
}

int main()
{
    int arr[] = {23,45,2,1,34,22,44,21,88,35};
    printHeap(arr, 10);

    BuildMaxHeap(arr, 10);

    printHeap(arr, 10);
    
}