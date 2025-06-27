#include<iostream>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int index;
    Node* next;
    Node(int x) {
        index = x;
        next = NULL;
    }
};

class NStack {
public:
    int* arr;
    Node** Top;
    stack<int> st;

    // Constructor
    NStack(int N, int S) {
        arr = new int[S];
        Top = new Node*[N];
        for (int i = 0; i < N; i++)
            Top[i] = NULL;

        for (int i = 0; i < S; i++)
            st.push(i);
    }

    // Push into Mth stack
    bool push(int x, int m) {
        if (st.empty()) return false;

        int index = st.top();
        st.pop();
        arr[index] = x;

        Node* temp = new Node(index);
        temp->next = Top[m - 1];
        Top[m - 1] = temp;

        return true;
    }

    // Pop from Mth stack
    int pop(int m) {
        if (Top[m - 1] == NULL) return -1;

        int index = Top[m - 1]->index;
        int val = arr[index];
        Node* toDelete = Top[m - 1];
        Top[m - 1] = Top[m - 1]->next;
        delete toDelete;

        st.push(index);
        return val;
    }
};

int main()
{
    
    
}