#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>> n;
    vector<int>ans(1,1);
        while(n>1)
        {
            int carry=0, res, size=ans.size();
            for(int i=0;i<size;i++)
            {
                res=ans[i]*n+carry;
                carry=res/10;
                ans[i]=res%10;
            }
            
            while(carry)
            {
                ans.push_back(carry%10);
                carry/=10;
            }
            n--;
        }
        reverse(ans.begin(), ans.end());

        for(auto i: ans)
            cout<< i;
    
}