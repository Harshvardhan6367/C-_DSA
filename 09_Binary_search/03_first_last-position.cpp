#include<iostream>
using namespace std;
int main()
{
    int arr[1000] ;
    int n , target;

    int start =0, end=n-1, first=-1, last=-1, mid;

    // first occurance
    while(start<=end)
    {
        mid = start + (end-start) / 2;
        if(arr[mid] == target){
            first = mid;
            end = mid-1;
        }
        else if(arr[mid]<target)
            start=mid+1;
        else
            end=mid-1;
    }


    //last occurance
    start =0; end= n-1;  // rearrangement of start and end;
    while(start<=end)
    {
        mid = start + (end-start) / 2;
        if(arr[mid] == target){
            last = mid;
            start = mid+1;
        }
        else if(arr[mid]<target)
            start=mid+1;
        else
            end=mid-1;
    }


    return 0;
}