#include<iostream>
using namespace std;
int main()
{
    int arr[1000], n, target;
    
    int start=0, end=n-1, mid;
    int index = n;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==target){
            index = mid;
            break;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else{        //arr[mid]>target (left side)
            index = mid;
            end = mid-1;
        }
    }
    return index;
    return 0;
}