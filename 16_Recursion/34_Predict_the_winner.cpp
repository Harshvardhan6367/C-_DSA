#include<iostream>
#include<vector>
using namespace std;

int winner(vector<bool>&person,int n,int index,int person_left, int k)
{
    if(person_left==1)
    {
        for(int i=0;i<n;i++)
        {
            if(person[i]==1)
            return i;
        }
    }

    int kill = (k-1)%person_left;  //predict which person should be eleminate.
    while(kill--)
    {
        index = (index+1) % n;
        while(person[index]==0)
            index = (index+1) % n ;  //skip the killed/eleminared person
    }
    person[index]=1;

    // next alive person
    while(person[index]==1)
    {
        index=(index+1) % n;
    }
    return winner(person,n,index,person_left-1,k);

}

int winner1(int n, int k)
{
    // base case
    if(n==1)
        return 0;

    return (winner1(n-1,k)+k) % n;
}

int main()
{
    int n = 5;
    vector<bool> person(5,0);
    int k = 3;
    int person_left=5  , index = 0;

    cout<< winner(person,n,index,person_left,k);
    
    cout<<endl;

    cout<< winner1(n,k);

}