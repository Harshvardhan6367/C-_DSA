#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s="abcabcbb";
    vector<bool>count(256,0);
    int first=0, second=0, len=0;

    while(second<s.size())
    {
        while(count[s[second]])     //if s[second]==1
        {
            count[s[first]]=0;
            first++;
        }
        count[s[second]]=1;    //jo repeted char ko 1 kiya

        len=max(len, second-first+1);

        second++;
    }
    cout<< len;
    return 0;
}
