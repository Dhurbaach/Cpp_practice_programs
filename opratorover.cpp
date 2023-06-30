#include <iostream>
using namespace std;
class complex
{
    int real, imag;

public:
    complex() {}
    complex(int a, int b)
    {
        real = a;
        imag = b;
    }
    complex operator + (complex k)
    {
        complex temp;
        temp.real = real + k.real;
        temp.imag = imag + k.imag;
        return temp;
    }
    void add(complex c1, complex c2)
    {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }
    void disp()
    {
        cout << "Sum is:" << real << "+" << imag << "i" << endl;
    }
};
int main()
{
    complex c1(3, 3), c2(3, 5), c3, c4;
    c3.add(c1, c2);
    c4 = c1 + c2;
    c4.disp();
    c3.disp();

    return 0;
}