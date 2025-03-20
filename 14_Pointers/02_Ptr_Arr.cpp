#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,30,40,50};
    int *ptr= arr;
//    cout<<*(arr+3);
//    cout<<&*(arr+3);

//    // print array
//     for(int i=0;i<5;i++)
//         cout<<*(arr+i)<<endl;

//    // print arrdess
//     for(int i=0;i<5;i++)
//         cout<<(arr+i)<<endl;

    //print value
    for(int i=0;i<5;i++)
        cout<<ptr[i]<<endl;

    //print address
    for(int i=0;i<5;i++){
        cout<<ptr<<endl;
        ptr++;
    }



}