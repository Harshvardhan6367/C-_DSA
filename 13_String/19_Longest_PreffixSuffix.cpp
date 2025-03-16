#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s="aabcdaabc";
    vector<int>lps(s.size(),0);
        int pre=0, suf=1;
        while(suf<s.size())
        {
            // Pre ans suf match
            if(s[pre]==s[suf])
            {
                lps[suf]=pre+1;
                pre++, suf++;
            }
            else{ //not match
                if(pre==0)
                {
                    lps[suf]=0;
                    suf++;
                }
                else{
                    pre=lps[pre-1];
                }
            }
        }
        cout<< lps[s.size()-1];
    return 0;
}