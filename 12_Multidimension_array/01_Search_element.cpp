#include<iostream>
using namespace std;
void PrintCol(int arr[][4], int row, int col){
    // Column wise
    for(int i=0; i<row; i++)
    for(int j=0; j<col; j++)
    cout<<arr[i][j]<<" ";
}
int main()
{
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int x=19;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            if(arr[i][j] == x){
                cout<<"Yes";
                return 0;
            }
        }
    }
    cout<<"No"<< endl;

    PrintCol(arr, 3, 4);
    return 0;
}