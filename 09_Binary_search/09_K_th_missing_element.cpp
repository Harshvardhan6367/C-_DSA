#include<iostream>
using namespace std;
int main()
{
    int arr[1000], n, k;

    int start=0, end=n-1, mid, ans=n ;
        while(start<=end)
        {
            mid=start+(end-start)/2;

            //left move
            if(arr[mid]-mid-1>=k){
                ans=mid;
                end=mid-1;
            }

            //right move
            else     //(arr[mid]-mid-1<=k)
            start=mid+1;
        }
        return ans+k;
    return 0;
}