#include<iostream>
using namespace std;
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int x  , index = 0;
    cout<< "Enter the element : ";
    cin >> x;
    for (int i = 0; i <7; i++)
    {
        if(x == arr[i]){
            index = i;
        }
    }
    cout << index;
    return 0;
}