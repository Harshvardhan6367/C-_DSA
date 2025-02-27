#include<iostream>
using namespace std;
int main()
{
    int arr[100]= {0,1,0,1,1,0};
    int start=0, end=6-1;
        
        while(start<end){
            if(arr[start]==0)
                start++;
            
            else{
                if(arr[end]==0){
                    swap(arr[start], arr[end]);
                    start++;
                    end--;
                }
                else
                    end--;
            }
        }
        for (int i = 0; i < 6; i++)
        {
            cout<< arr[i]<< " ";
        }
        
    return 0;
}