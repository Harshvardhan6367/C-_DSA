#include<iostream>
#include<vector>
using namespace std;
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

int KMP_match(string haystack, string needle){

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
         return 1;
     else
         return -1;

}         
int main()
{
    string a ="abcd";
    string b ="cdabcdab";
        if(a==b)
            return 1;

        int repeat=1;
        string temp = a;
        while(temp.size()<b.size())
        {
            temp+=a;
            repeat++;
        }
        // Kmp pattern search
        if(KMP_match(temp,b)==1)
            cout<< repeat;

        //Temp+a KLM search
        else if(KMP_match(temp+a,b)==1)
            cout<< repeat+1;
        
        // agar match na kare
        else
            cout<< -1;
}