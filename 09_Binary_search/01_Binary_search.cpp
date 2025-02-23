#include<iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cout<< "Enter n :";
    cin>> n;
    cout<<"Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    int key ;
    cout<< "Enter search element :";
    cin >> key;

    // Binary search
    int start = 0, end = n-1;
    while(start<=end){
        int mid = (start + end) / 2;
        if(arr[mid]==key){
            cout<<"got it";
            break;
        }
        else if(arr[mid]<key){
            start = mid +1;
        }
        else
        end = mid - 1;
    }
    return 0;
}