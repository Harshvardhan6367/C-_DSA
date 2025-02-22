// My code ----->   :)

#include<iostream>
using namespace std;
int main()
{
    int arr[7] = {1, 2 ,3 ,8, 5, 6, 9};
    int firstmax = 0, secondmax = 0 ;
    for (int i = 0; i < 7; i++)
    {
        if(arr[i]>firstmax){
            firstmax = arr[i];
        }
    }
    for (int i = 0; i < 7; i++)
    {
        if(arr[i] == firstmax){
            continue;
        }
        else if(arr[i]>secondmax){
            secondmax = arr[i];
        }
    }
    cout << secondmax;
    return 0;
}



// gfg code
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[7] = {1, 2, 3, 8, 5, 6, 9};
//     int n = 7;
//     int ans = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > ans)
//         {
//             ans = arr[i];
//         }
//     }
//     // Find the second largest element
//     int second = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != ans)
//         {
//             second = max(second, arr[i]); // Compare with the current element
//         }
//     }
//     cout << second;
// }
