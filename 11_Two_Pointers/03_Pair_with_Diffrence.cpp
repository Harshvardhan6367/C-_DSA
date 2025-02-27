#include<iostream>
#include<vector>
using namespace std;
int main()
{

    vector<int>arr ={2,3,5,10,50,80};
    int target =45;
    vector<int>ans;

    int start=0, end=1;

    while(end<arr.size()){
        // subtraction = target
        if(arr[end]-arr[start]==target){
            ans.push_back(start+1);      // Store 1-based index
            ans.push_back(end+1); 
            break;          // Stop after finding the first valid pair
        }


        // subtraction < target
        else if(arr[end]-arr[start]<target)
            end++;


        // subtraction > target
        else  //(nunbers[start]-arr[end]>target)
            start++;

        if(start==end)
            end++;
    } 


     // Print the result only if a valid pair is found
     if (!ans.empty()) {
        cout << ans[0] << " " << ans[1] << endl;
    } else {
        cout << "No valid pair found!" << endl;
    }
    

    return 0; 
}