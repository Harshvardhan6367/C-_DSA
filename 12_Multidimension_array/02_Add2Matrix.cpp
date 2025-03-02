#include<iostream>
using namespace std;
int main()
{
    int arr1[3][4] ={1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4] ={1,2,3,4,5,6,7,8,9,10,11,12};
    int ans[3][4];

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            ans[i][j]= arr1[i][j]+arr2[i][j];
        }
    }
    
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<< ans[i][j]<< " ";
        }
    }

    return 0;
}