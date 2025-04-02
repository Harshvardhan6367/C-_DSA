#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[],int start,int mid,int end)
{
    vector<int>temp(end-start+1);
    int left = start, right = mid+1, index=0;
    while(left<=mid && right<=end)
    {
        if(arr[left]<=arr[right])
        {
            temp[index]=arr[left];
            index++, left++;
        }
        else 
        {
            temp[index]=arr[right];
            index++, right++;
        }
    }
    // If left side of element remains
    while(left<=mid)
    {
        temp[index]=arr[left];
        index++, left++;
    }
    // If right side of element remains
    while(right<=end)
    {
        temp[index]=arr[right];
        index++, right++;
    }

    // temp ---> array
    index=0;
    while(start<=end)
    {
        arr[start]=temp[index];
        start++, index++;
    }
}

void mergesort(int arr[],int start,int end)
{
    if(start==end)
        return;
        

    int mid = start+(end-start)/2;
    mergesort(arr,start,mid);  //Split array half into left 
    mergesort(arr,mid+1,end);  //Split array half into left

    merge(arr,start,mid,end);
}
int main()
{
    int arr[]={6,4,7,2,9,8,3,5};
    for (int i = 0; i < 8; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    int start = 0, end = 7;
    mergesort(arr,start,end);
    for (int i = 0; i < 8; i++)
        cout<<arr[i]<<" ";
    
}