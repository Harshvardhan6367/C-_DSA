#include<iostream>
using namespace std;
int main()
{
    string address;
    address = "1.1.1.1.1";
    int index=0;
        string ans;
        while(index<address.size())
        {
            if(address[index]=='.')
                ans=ans+"[.]";
            else
                ans=ans+address[index];
            index++;
        }
        cout<< ans<< endl;

        cout<< address.size()<<endl;
        cout<< ans.size();

    return 0;
}