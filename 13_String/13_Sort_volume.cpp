#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s = "lEeTcOdE";
    // string s = "leetcode";      // Output: "leetecedo"
    vector<int>lower(26,0), upper(26,0);

        for(int i=0;i<s.size();i++)
        {
            //Upper case store
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                upper[s[i]-'A']++;
                s[i]='#';    
            }
            //Lower case store
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                lower[s[i]-'a']++;
                s[i]='#';
            }
        }

        // Sort vowel
        string vowel;
        // Upper case
        for(int i=0; i<26; i++)
        {
            char ch = 'A'+i;  // konsa vowel hai
            while(upper[i]){
                vowel+=ch;
                upper[i]--;
            }
        }

        //lower case
        for(int i=0; i<26; i++)
        {
            char ch = 'a'+i;  // konsa vowel hai
            while(lower[i]){
                vowel+=ch;
                lower[i]--;
            }
        }

        // Insert vowel
        int first=0, second=0;
        while(second<vowel.size())
        {
            if(s[first]=='#')
            {
                s[first]=vowel[second];
                second++;
            }
            first++;
        }

        cout<< s;
}