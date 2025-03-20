#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter rows and Column";
    cin>>n;
    cin>>m;

    //Created 2d array
    int **ptr = new int * [n];
    for(int i=0;i<n;i++)
    {
        ptr[i] = new int[m]; 
    }


    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
        cin>>ptr[i][j];
        
     //Print values
    for(int i=0;i<n;i++)
    { 
        for(int j=0;j<m;j++)
        cout<<ptr[i][j]<<" ";
        cout<<endl;
    }
    //Release the memory , heap

    for (int i = 0; i < n; i++)
    {
        delete[] ptr[i];
    }
    
    delete[] ptr;

}