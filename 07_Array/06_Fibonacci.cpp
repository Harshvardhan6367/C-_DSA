#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin>> n;
    int arr[1000];
    //first = 0; 
    // second = 1;

    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i < n; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }
    cout<< arr[n-1];
}