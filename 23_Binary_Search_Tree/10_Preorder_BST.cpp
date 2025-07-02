#include<iostream>
#include<stack>
using namespace std;

// User function Template for C++

class Solution {
  public:
  
    void BST(int arr[], int &index, int lower, int upper, int N)
    {
        if(index==N || arr[index]<lower || arr[index]>upper)
            return;
            
        int value = arr[index++];
        //left
        BST(arr, index, lower, value, N);
        //right
        BST(arr, index, value, upper, N);
    }
    
    int canRepresentBST(int arr[], int N) {
        // code here
        int lower = INT_MIN;
        int upper = INT_MAX;
        
        int index = 0;
        
        BST(arr, index, lower, upper, N);
        return index==N;
    }
};


// Methord 2 --> Using Stack To prevent segmentation Fault
// User function Template for C++

class Solution {
  public:
  
    
    
    int canRepresentBST(int arr[], int N) {
        // code here
        stack<int>lower, upper;
        lower.push(INT_MIN);
        upper.push(INT_MAX);
        int UpperBound, LowerBound;
        
        for(int i=0; i<N; i++)
        {
            //1
            if(arr[i]<lower.top())  //Out of range, and smaller then Node
            return 0;
            //2
            while(arr[i]>upper.top())
            {
                upper.pop();
                lower.pop();
            }
            //3
            LowerBound = lower.top();
            UpperBound = upper.top();
            
            lower.pop();
            upper.pop();
            
            //Right side
            lower.push(arr[i]);
            upper.push(UpperBound);
            //Upper side
            lower.push(LowerBound);
            upper.push(arr[i]);
        }
        
        return 1;
    }
};
int main()
{
    
    
}