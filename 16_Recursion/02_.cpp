#include<iostream>
using namespace std;
int print(int n)
{
    if(n == 1)
    {
        cout<<n;
        return 0;
    }
    cout<<n<<endl;
    print(n-1);
}
int main()
{
    print(9);

}