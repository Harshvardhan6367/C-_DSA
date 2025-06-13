#include <iostream>
using namespace std;

class myComplex
{
    int real, img;

public:
    myComplex() {}

    myComplex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }

    void display()
    {
        cout << real << " +i" << img << endl;
    }

    myComplex operator+(myComplex &C)
    {
        myComplex ans;
        ans.real = real + C.real;
        ans.img = img + C.img;
        return ans;
    }
};

int main()
{
    myComplex C1(3, 5);
    myComplex C2(7, 5);

    myComplex C3 = C1 + C2;
    C3.display();

    return 0;
}
