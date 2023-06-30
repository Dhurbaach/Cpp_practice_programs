#include <iostream>
using namespace std;
class complex;//forward declaration
class calculator
{
public:
    void sumreal(complex, complex);
    void sumcomp(complex, complex);
};
class complex
{
    int a, b;
    friend class calculator;
    // making individual function as friend
    // friend void calculator::sumreal(complex, complex);
    // friend void calculator ::sumcomp(complex, complex);

public:
    int setnum(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void display()
    {
        cout<<"The complex number you have entered is :"<<a<<"+"<<b<<"i"<<endl;
    }
};
void calculator::sumreal(complex c1, complex c2)
{
    int k = (c1.a + c2.a);
    cout << "The sum of real part of complex number is:" << k << endl;
}
void calculator::sumcomp(complex c1, complex c2)
{
    int x = (c1.b + c2.b);
    cout << "The sum of complex part of complex number is:" << x << endl;
}
int main()
{
    complex c1, c2;
    c1.setnum(2, 3);
    c2.setnum(4, 5);
    c1.display();
    c2.display();
    calculator calc;
    calc.sumreal(c1, c2);
    calc.sumcomp(c1, c2);

    return 0;
}