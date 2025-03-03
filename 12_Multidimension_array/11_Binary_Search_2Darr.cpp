#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>>matrix(5, vector<int>(4));
    int target;
    int row=matrix.size();
        int col=matrix[0].size();

        int start=0 ,end=row*col-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            int row_index=mid/col;
            int col_index=mid%col;

            if(matrix[row_index][col_index]==target)
                return 1;
            else if(matrix[row_index][col_index]<target)
                start=mid+1;
            else
                end=mid-1;
        }
        
    return 0;
}