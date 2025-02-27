#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>height ={4, 2, 0, 5, 2, 6, 2, 3};

    int n=height.size();
    int leftmax=0, rightmax=0, maxheight=height[0],index=0, water=0;

    // Max height building
    for(int i=1; i<n; i++)
    {
        if(maxheight<height[i]){
            maxheight=height[i];
            index=i;
        }
    }

    //left part
    for(int i=0; i<index; i++)
    {
        if(leftmax>height[i])
            water+=leftmax-height[i];
        else //(leftmax<=height[i])
            leftmax = height[i];
    }

    //Right part
    for(int i=n-1; i>index; i--)
    {
        if(rightmax>height[i])
            water+=rightmax-height[i];
        else //(rightmax<=height[i])
            rightmax = height[i];
    }

    cout<< water<< " ";
}