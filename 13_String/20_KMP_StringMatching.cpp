//leetcode problem no 28;
#include<iostream>
#include<vector>
using namespace std;

//longest prefix suffix
void lpsfound(vector<int>&lps, string s)
{
    int pre=0, suf=1;
    while(suf<s.size())
    {
        if(s[pre]==s[suf])
        {
            lps[suf]=pre+1;
            suf++,pre++;
        }
        else{
            if(pre==0)
            {
                lps[suf]=0;
                suf++;
            }
            else
            {
                pre=lps[pre-1];
            }
        }
    }
}

int main()
{
 
     string haystack= "sadbutsad"; 
     string needle = "sad";
         vector<int>lps(needle.size(),0);
         lpsfound(lps,needle);
         int first=0 , second=0;
         while(second<needle.size() && first<haystack.size())
         {
             if(needle[second]==haystack[first])
             {
                 second++,first++;
             }
             else{
                 if(second==0)
                 {
                     first++;
                 }
                 else{
                     second=lps[second-1];
                 }
             }
         }
         if(second==needle.size())
             cout<< first-second;
         else
             cout<< "-1";
    return 0;
}