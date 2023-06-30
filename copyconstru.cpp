#include <iostream>
using namespace std;
class number
{
    int a, b;

public:
    number() {}
    number(int k)
    {
        a = k;
        b = 10;
    }
    number(number &obj)
    {
        a = obj.a;
        b=obj.b;
    }
    void disp()
    {
        cout << "The value of a is :" << a << endl;
        cout << "The value of b is :" << b << endl;
    }
};
int main()
{
    number a1(6), b1(9);
    number c1(b1);
    a1.disp();
    b1.disp();
    c1.disp();
    return 0;
}