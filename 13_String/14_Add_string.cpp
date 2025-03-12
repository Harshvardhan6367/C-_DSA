#include<iostream>
#include<numeric>
#include<algorithm>
using namespace std;
    string add(string num1, string num2)
    {
        int index1 = num1.size()-1, index2=num2.size()-1;
        int carry=0, sum;
        string ans;
        while(index2>=0)
        {
            sum=(num1[index1]-'0')+(num2[index2]-'0')+carry;
            carry=sum/10;
            char ch = '0' + sum%10; //num ko char form me convert karna hai 
            ans+= ch;
            index1--, index2--;
        }
        // remaining part of index 1 
        while(index1>=0)
        {
            sum=(num1[index1]-'0')+carry;
            carry=sum/10;
            char ch='0'+sum%10;
            ans+=ch;              // ans store in char form in string
            index1--;
        }
        // last carry add in ans
        if(carry)
            ans+='1';

        //reverse the string ans
        reverse(ans.begin(), ans.end());

        cout<< ans;
    }
int main()
{
    string num1 = "456", num2= "77";
    string ans;
    if(num1.size()>=num2.size())
        ans= add(num1, num2);
    else
        ans= add(num2, num1);

}