#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string s="aacecaaaa";
    int size=s.size();
    string rev= s;
    reverse(rev.begin(),rev.end());
    s+='$';
    s+=rev;
    
    
    //lps nikalna hai
    int n=s.size();
    vector<int>lps(n,0);
    int pre=0, suf=1;
    while(suf<n)
    {
        if(s[pre]==s[suf])
        {
            lps[suf]=pre+1;
            suf++,pre++;
        }
        else{
            if(pre==0)
            {
                suf++;
            }
            else{
                pre=lps[pre-1];
            }
        }
    }
    cout<< size-lps[n-1];
    return 0;
}