#include<iostream>
using namespace std;
int main()
{
    int arr[1000], n;


    int start=0, end=n-1,ans=arr[0], mid;
    
        while(start<=end){
            mid=start+(end-start)/2;

            //left side sorted array
            if(arr[mid]>=arr[0])
            start=mid+1;

            //right side sorted array
            else{
            ans=arr[mid];
            end=mid-1;
            }
        }
        return ans;
    return 0;
}