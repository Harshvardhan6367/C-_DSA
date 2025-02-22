#include<iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cout<<" Enter n :";
    cin>> n;
    cout<<" Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // Insertion sort
    for (int i = n-1; i > 1; i--)
    {
        for (int j = i; j >= 0; j--)
        {
            if(arr[j]<arr[j+1])
            swap(arr[j], arr[j+1]);
            else
            break;
        }
    }
    
    //Print array
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<< " ";
    }
    
    
    return 0;
}