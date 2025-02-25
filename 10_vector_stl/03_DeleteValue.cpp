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

    cout<<"Size of vnew: "<< vnew.size()<<endl;
    cout<<"Capacity of vnew: "<< vnew.capacity()<<endl;
    
    // erase element os 1st index
    vnew.erase(vnew.begin()+1);
    cout<<"Size of vnew: "<< vnew.size()<<endl;
    cout<<"Capacity of vnew: "<< vnew.capacity()<<endl;

    for(int i=0; i<vnew.size(); i++){
        cout<<vnew[i]<< " ";
    }
    cout<<endl;
    
    // insert value
    vnew.insert(vnew.begin()+1, 50);
    for(int i=0; i<vnew.size(); i++){
        cout<<vnew[i]<< " ";
    }
    cout<<endl;
    
    vnew[1]=35;
    for(int i=0; i<vnew.size(); i++){
        cout<<vnew[i]<< " ";
    }
    return 0;
}



