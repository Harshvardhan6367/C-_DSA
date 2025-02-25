#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v1(5, 1);

    cout<<"Size of v1: "<< v1.size()<<endl;
    cout<<"Capacity of v1: "<< v1.capacity()<<endl;
    
    v1.push_back(6);
    cout<<"Size of v1: "<< v1.size()<<endl;
    cout<<"Capacity of v1: "<< v1.capacity()<<endl;

    vector<int>v2 = {1,2,3,4};
    cout<<v2.size();
    return 0;
}