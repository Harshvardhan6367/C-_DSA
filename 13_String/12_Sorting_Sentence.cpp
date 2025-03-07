#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s ="is2 sentence4 This1 a3";
    vector<string>ans(10);
        string temp;
        int count=0, index=0;
        while(index<s.size())
        {
            if(s[index]==' '){
                int pos = temp[temp.size()-1]-'0';
                temp.pop_back();
                ans[pos]=temp;
                temp.clear();
                count++;
            }
            else
                temp+=s[index];
            
            index++;
        }
        //print Last sentence
        
        int pos = temp[temp.size()-1]-'0';
                temp.pop_back();
                ans[pos]=temp;
                temp.clear();
                count++;

        //print string
        for(int i=1;i<=count;i++)
        {
            temp+=ans[i];
            temp+=' ';
        }
        temp.pop_back();

        cout<< temp;
    return 0;
}