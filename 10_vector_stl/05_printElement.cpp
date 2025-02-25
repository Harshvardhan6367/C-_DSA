#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr;
    arr.push_back(2);
    arr.push_back(21);
    arr.push_back(12);
    arr.push_back(112);

    cout<<arr[0]<<endl;
    cout<<arr.front()<<endl;


    cout<<arr[arr.size()-1]<<endl;
    cout<<arr.back()<<endl;



    // copy values of 1 vectot into another
    vector<int>a;

    a = arr;
    cout<<a[arr.size()-1]<< endl;
    return 0;
}



