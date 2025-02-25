#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vnew;
    vnew.push_back(2);
    vnew.push_back(9);
    vnew.push_back(7);
    vnew.push_back(4);
    vnew.push_back(5);
    vnew.pop_back();

    // insert value
    vnew.insert(vnew.begin()+1, 50);
    for(int i=0; i<vnew.size(); i++){
        cout<<vnew[i]<< " ";
    }
    cout<<endl;
    
    // update value
    vnew[1]=35;
    for(int i=0; i<vnew.size(); i++){
        cout<<vnew[i]<< " ";
    }
    cout<<endl;
    
    //clear all element
    vnew.clear();
    for(int i=0; i<vnew.size(); i++){
        cout<<vnew[i]<< " ";
    }
    cout<<endl;

    return 0;
}



