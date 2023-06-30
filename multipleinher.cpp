#include <iostream>
#include <cmath>
using namespace std;
class simple_calc
{
protected:
    int a, b;

public:
    void getnum()
    {
        cout << "Enter first number:" << endl;
        cin >> a;
        cout << "Enter second number:" << endl;
        cin >> b;
    }
    int sum()
    {
        return (a + b);
    }
    int mult()
    {
        return (a * b);
    }
    void display()
    {
        cout << "The value of sum is:" << sum() << endl;
        cout << "The value of multiply is:" << mult() << endl;
    }
};
class sintific_calc
{
protected:
    int c;

public:
    void getnum2()
    {
        cout << "Enter any number:" << endl;
        cin >> c;
    }
    void disp()
    {
        cout << "The value of sine of " << c << " is " << sin(c) << endl;
        cout << "The value of cosine of " << c << " is " << cos(c) << endl;
    }
};
class hybrid_calc : public simple_calc, public sintific_calc
{
};
int main()
{
    int cho;
    hybrid_calc hari;
    cout << "Enter your choice:1,2" << endl;
    cin >> cho;
    switch (cho)
    {
    case 1:
        hari.getnum();
        hari.display();
        break;
    case 2:
        hari.getnum2();
        hari.disp();
        break;
    default:
        cout << "Invalid input!!!";
        break;
    }
    return 0;
}