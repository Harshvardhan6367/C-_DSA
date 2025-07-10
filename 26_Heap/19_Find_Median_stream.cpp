#include<iostream>
#include <queue>
#include <vector>
using namespace std;


using namespace std;

class Solution {
private:
    priority_queue<int> leftMaxHeap; // Max-heap
    priority_queue<int, vector<int>, greater<int>> rightMinHeap; // Min-heap
    vector<double> medians;

    void balanceHeaps() {
        if (rightMinHeap.size() > leftMaxHeap.size()) {
            leftMaxHeap.push(rightMinHeap.top());
            rightMinHeap.pop();
        } else if (leftMaxHeap.size() > rightMinHeap.size() + 1) {
            rightMinHeap.push(leftMaxHeap.top());
            leftMaxHeap.pop();
        }
    }

    double getCurrentMedian() {
        if (leftMaxHeap.size() > rightMinHeap.size()) {
            return leftMaxHeap.top();
        } else {
            return (leftMaxHeap.top() + rightMinHeap.top()) / 2.0;
        }
    }

public:
    vector<double> getMedian(vector<int> &arr) {
        for (int x : arr) {
            if (leftMaxHeap.empty() || x <= leftMaxHeap.top()) {
                leftMaxHeap.push(x);
            } else {
                rightMinHeap.push(x);
            }

            balanceHeaps();
            medians.push_back(getCurrentMedian());
        }
        return medians;
    }
};

int main()
{
    
    
}