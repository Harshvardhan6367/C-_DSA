#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
    vector<char> S = {'h','e','l','l','o'};
                                
    stack<char>st;
    for(int i=0;i<S.size();i++)
    {
        st.push(S[i]);
    }

    int i=0;
    while(!st.empty())
    {
        S[i]=st.top();
        st.pop();
        i++;
    }

    for (char c : S) {
        cout << c;
    }
}