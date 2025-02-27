#include<iostream>
#include<vector>
using namespace std;
int main()
{

    vector<int>numbers ={2,7,11,15,27};
    int target =22;
    vector<int>ans;

    int start=0, end=numbers.size()-1;

    while(start<end){
        if(numbers[start]+numbers[end]==target){
            ans.push_back(start+1);      // Store 1-based index
            ans.push_back(end+1); 
            break;          // Stop after finding the first valid pair
        }
        else if(numbers[start]+numbers[end]<target)
            start++;
        else  //(nunbers[start]+numbers[end]>target)
            end--;
    } 

     // Print the result only if a valid pair is found
     if (!ans.empty()) {
        cout << ans[0] << " " << ans[1] << endl;
    } else {
        cout << "No valid pair found!" << endl;
    }
    

    return 0; 
}