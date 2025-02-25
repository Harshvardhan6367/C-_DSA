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

    for(auto it =arr.begin(); it!=arr.end();it++){
        cout<<*it<<" ";
    }
    cout<< endl;

    for(auto i: arr)
    cout<< i<<" ";
    return 0;
}



