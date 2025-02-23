#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n , int key){
    int start = 0, end = n-1;
    while(start<=end){
        int mid = (start + end) / 2;
        if(arr[mid]==key){
            return mid;
            break;
        }
        else if(arr[mid]<key){
            start = mid +1;
        }
        else   //(arr[mid]>key)
        end = mid - 1;
    }

    // When element not present in array return -1;
    return -1;
}
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

    cout<< BinarySearch(arr, n, key);

    return 0;
}