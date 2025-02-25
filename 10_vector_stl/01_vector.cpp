#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // create vector
    vector<int>v;
    
    //size and capacity
    cout<<"Size of vector :"<< v.size()<<endl;
    cout<<"Capacity of vector :"<< v.capacity()<<endl;
    v.push_back(2);
    v.push_back(4);
    v.push_back(9);
    cout<<"Size of vector :"<< v.size()<<endl;
    cout<<"Capacity of vector :"<< v.capacity()<<endl;

    //update value
    v[1]=7;
    return 0;
}