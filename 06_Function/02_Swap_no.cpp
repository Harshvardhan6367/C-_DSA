#include<iostream>
using namespace std;
void Swap(int &n, int &m)   // Pass by Refrence
{
    int temp;
    temp = n;
    n = m;
    m = temp;
}

void Swap(float &n, float &m)   // Pass by Refrence
{
    float temp;
    temp = n;
    n = m;
    m = temp;
}

int main()
{
    int a, b;
    cout << "Enter numbers :";
    cin>> a>> b;
    
    float c = 2.45, d = 3.455;
    

    Swap(a, b);
    cout << a<< " " << b;

    cout<< endl;
    Swap(c, d);
    cout << c<< " " << d;
    return 0;
}