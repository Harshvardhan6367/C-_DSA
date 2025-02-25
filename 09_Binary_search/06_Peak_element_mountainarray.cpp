#include<iostream>
using namespace std;
int main()
{
    int arr[1000], n;
    int start=0, end=n-1, mid;
        while(start<=end){
            mid=end+(start-end)/2;

            //peak element
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            return mid;

            //right side move
            else if(arr[mid]>arr[mid-1])
            start=mid+1;

            //left side move
            else  //(arr[mid]>arr[mid+1])
            end=mid-1;
        }
        return -1;
    return 0;
}