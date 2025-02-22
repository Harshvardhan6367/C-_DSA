#include<iostream>
using namespace std;
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int temp[6];
    for (int i = 0; i < 6; i++)
    {
        temp[5-i] = arr[i];
    }
    for (int i = 0; i < 6; i++)
    {
        cout << temp[i]<< " ";
    }
    
    
    return 0;
}