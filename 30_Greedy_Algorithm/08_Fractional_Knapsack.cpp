#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// class implemented

struct C{
    int value;
    int weight;
};


bool comp(C a, C b)
{
    return a.value * b.weight > b.value * a.weight;
}

class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        int n = wt.size();

        // create vector of items
        vector<C> items(n);
        for(int i = 0; i < n; i++) {
            items[i].value = val[i];
            items[i].weight = wt[i];
        }

        // sort on the basis of value/weight descending order
        sort(items.begin(), items.end(), comp);

        double profit = 0;
        int i = 0;

        while(capacity && i < n)
        {
            if(capacity >= items[i].weight)
            {
                profit += items[i].value;
                capacity -= items[i].weight;
            }
            else
            {
                double temp = (double)items[i].value / items[i].weight;
                profit += temp * capacity;
                capacity = 0;
            }
            i++;
        }

        return profit;
    }
};

int main()
{
    
    
}