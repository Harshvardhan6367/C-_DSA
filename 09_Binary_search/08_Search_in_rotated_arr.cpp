#include<iostream>
using namespace std;
int main()
{
    int arr[1000], n;
    int target;
    int start=0, end=n-1, mid;
    while(start<=end){
        mid=start+(end-start)/2;

        //I find my element
        if(arr[mid]==target)
        return mid;

        //left side sorted
        else if(arr[mid]>=arr[0])
        {
        if(arr[start]<=target && arr[mid]>target)
            end=mid-1;
        else
            start=mid+1;
        }

        //right side sorted
        else      //(arr[mid]<=arr[0])
        {
            if(arr[mid]<target && arr[end]>=target)
                start=mid+1;
            else
                end=mid-1;
        }
    }
    return -1;
}