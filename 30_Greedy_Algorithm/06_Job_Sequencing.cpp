#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
/*

struct job {
    int deadline;
    int profit;
};

// Comparator to sort jobs by profit in descending order
bool comp(job a, job b) {
    return a.profit > b.profit;
}

class Solution {
  public:
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        int n = profit.size();

        // Step 1: Build a job array
        vector<job> arr(n);
        for(int i = 0; i < n; i++) {
            arr[i].deadline = deadline[i];
            arr[i].profit = profit[i];
        }

        // Step 2: Sort jobs by profit
        sort(arr.begin(), arr.end(), comp);

        // Step 3: Find maximum deadline
        int dead = 0;
        for(int i = 0; i < n; i++)
            dead = max(dead, arr[i].deadline);

        // Step 4: Create time slots
        vector<bool> Task(dead + 1, 0);  // 1-based indexing

        vector<int> ans(2, 0); // ans[0] = count of jobs, ans[1] = total profit

        // Step 5: Try to schedule each job
        for(int i = 0; i < n; i++) {
            for(int j = arr[i].deadline; j > 0; j--) {
                if(!Task[j]) {
                    Task[j] = 1;
                    ans[0]++;
                    ans[1] += arr[i].profit;
                    break;
                }
            }
        }

        return ans;
    }
};
*/


// More optamize solution
struct job {
    int deadline;
    int profit;
};

// Comparator to sort jobs by profit in descending order
bool comp(job a, job b) {
    return a.profit > b.profit;
}

// DSU find function
int find(int num, vector<int>& parent) {
    if(num == parent[num])
        return num;
    return parent[num] = find(parent[num], parent); // Path compression
}

class Solution {
  public:
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        int n = profit.size();

        // Step 1: Create job array
        vector<job> arr(n);
        for(int i = 0; i < n; i++) {
            arr[i].deadline = deadline[i];
            arr[i].profit = profit[i];
        }

        // Step 2: Sort jobs by profit
        sort(arr.begin(), arr.end(), comp);

        // Step 3: Find max deadline
        int max_dead = 0;
        for(int i = 0; i < n; i++)
            max_dead = max(max_dead, arr[i].deadline);

        // Step 4: DSU parent initialization
        vector<int> parent(max_dead + 1);
        for(int i = 0; i <= max_dead; i++)
            parent[i] = i;

        vector<int> ans(2, 0); // ans[0] = total jobs done, ans[1] = total profit

        // Step 5: Try to place each job in the latest available slot
        for(int i = 0; i < n; i++) {
            int slot = find(arr[i].deadline, parent);
            if(slot > 0) {
                ans[0]++; // Job done
                ans[1] += arr[i].profit; // Add profit
                parent[slot] = slot - 1; // Union operation
            }
        }

        return ans;
    }
};





int main()
{
    
    
}