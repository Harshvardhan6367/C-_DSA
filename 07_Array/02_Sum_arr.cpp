#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {5, 8, 3, 5, 9};
    int ans = 0;

    for (int i = 0; i < 5; i++)
    {
        ans += arr[i];
    }
    cout << ans;
    return 0;
}