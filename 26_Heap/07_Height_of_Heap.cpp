#include<iostream>
using namespace std;

int heapHeight(int N, int arr[]) {
        // code here
        if(N==1)
            return 1;
            
        int height = 0;
        
        while(N>1)
        {
            height++;
            N/=2;
        }
        return height;
    }
int main()
{
    
    
}