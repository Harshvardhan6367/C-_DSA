#include<iostream>
#include<vector>  
using namespace std;

vector<int> findTwoElement(vector<int>& arr) {
    int n = arr.size();
    
    // Decrease value by 1
    for(int i = 0; i < n; i++)
        arr[i]--;

    // Occurrence tracking
    for(int i = 0; i < n; i++)
    {
        arr[arr[i] % n] += n;
    }

    vector<int> ans(2);
    for(int i = 0; i < n; i++)
    {
        // Repeated element
        if(arr[i] / n == 2)
        {
            ans[0] = i + 1;
        }
        // Missing element
        else if(arr[i] / n == 0)
        {
            ans[1] = i + 1;
        }
    }
    
    return ans;
}

int main() {
    vector<int> arr = {1, 3, 3, 4, 5}; // Example input
    vector<int> result = findTwoElement(arr);

    cout << "Repeated Number: " << result[0] << endl;
    cout << "Missing Number: " << result[1] << endl;

    return 0;
}
