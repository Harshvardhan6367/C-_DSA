#include<iostream>
using namespace std;
int main()
{
    int stalls[1000]={1, 2, 4, 8, 9};
    int n = 5, k=3;

    int start =1, end, mid, ans;

    // sort stall in incresing order,
    // sorting code if array not sort

    end = stalls[n-1]-stalls[0];

    while(start<=end){
        mid=start+(end-start)/2;
        int count=1, pos=stalls[0];
        for(int i=0; i<n;i++){
            if(pos+mid<=stalls[i]){
                count++;
                pos=stalls[i];
            }
        }
        if(count<k)
            end=mid-1;
        else     // (count>=k)
        {
            ans=mid;
            start=mid+1;
        }
    }
    cout<<ans;
    return 0;
}