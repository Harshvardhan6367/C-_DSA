#include<iostream>
using namespace std;

int PrintSumdig(int arr[][3], int row, int col){ 
    int first=0;
    int sec=0;

    //first Digonal
    for(int i=0; i<row; i++)
        first+=arr[i][i];

    //Second Digonal
    int i=0, j= col-1;
    while (j>=0)
    {
        sec+=arr[i][j];
        i++;
        j--;
    }
    cout<< first<< " "<<sec<< " ";
}
int main()
{
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    
    PrintSumdig(arr, 3, 3);
    

    return 0;
}