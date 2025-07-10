 #include<iostream>
 #include<vector>
#include<climits>
#include<bits/stdc++.h>
 using namespace std;

 string minWindow(string s, string t) {
        int total = t.size();

        // Char and Count
        unordered_map<char,int>m;
        for(int i=0;i<t.size();i++)
            m[t[i]]++;
        int start=0, end=0, ans=INT_MAX, index=-1, n=s.size();

        // ans --> min lenght of substring
        // index : starting index of answer 
        while(end<n)
        {
            m[s[end]]--;   // Decrerse count of char
            if(m[s[end]]>=0)  //If count is not negative
            total--;          // Decrease the total

            //Can decrease size of window
            while(!total && start<=end)
            {
                //Update length of substring
                if(ans>end-start+1)
                {
                    ans=end-start+1;
                    index=start;
                }
                m[s[start]]++;        //Increse the count of char
                if(m[s[start]]>0)     //if count is poastive
                    total++;        //increse the total
                start++;  // move start --> decrese size of window
            }
            end++;
        }

        if(index==-1)
        return "";

        string str = "";
        for(int i=index; i<index+ans;i++)
        {
            str+=s[i];
        }

        return str;
    }


 int main()
 {
    
    
 }