#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        // calculate the frequency of each char
        vector<int>freq(26,0);

        // count highest freq char
        int count = 0;

        for(int i=0;i<tasks.size();i++)
        {
            freq[tasks[i]-'A']++;
            count = max(count, freq[tasks[i]-'A']);

        }

        int ans = (count-1) * (n+1);

        for(int i=0;i<26;i++)
        {
            if(freq[i]==count)
            ans++;
        }

        return ans>tasks.size() ? ans : tasks.size();
    }
};
int main()
{
    
    
}