#include<iostream>
using namespace std;
int main()
{
    int arr[1000]  = {12, 34 ,67, 90};
    int n=4, m=2;   //n = no of books      .   m = no of students
    
    //
    if(m>n)
    return -1;

    //
    int start=0, end=0, ans, mid;
    for(int i =0; i<n; i++){
        start= max(start,arr[i]);
        end+=arr[i];    // sum of all element.
    }

    while(start<=end){
        mid=start+(end-start)/2;
        int pages=0, count=1;
        for(int i=0; i<n; i++){
            pages+=arr[i];
            if(pages>mid){
                count++;
                pages=arr[i];
            }
        }
        if(count<=m){
            ans=mid;
            end=mid-1;
        }
        else
            start=mid+1;
    }

    cout<< ans;
    return 0;
}