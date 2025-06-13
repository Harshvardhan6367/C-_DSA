#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>arr(5);
    cout<<"Enter input : ";
    for(int i=0;i<5;i++)
    cin>>arr[i];

    //Open file
    ofstream fout;
    fout.open("zero.txt");

    fout<<"Orignal form\n";
    for(int i=0;i<5;i++)
    {
        fout<<arr[i]<<" ";
    };

    fout<<"\nSorted form\n";

    sort(arr.begin(), arr.end());
    for(int i=0;i<5;i++)
    {
        fout<<arr[i]<<" ";
    };

    fout.close();   
}