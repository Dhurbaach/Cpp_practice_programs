#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(void);// default constructure
    complex(int, int);//paramaterized constructure
    void display()
    {
        cout << "The complex number is" << a << "+" << b << "i"<<endl;
    }
};
complex::complex(void)
{ 
    a = 10;
    b = 9;
}
complex::complex(int x, int y)// Constructure overloading
{
    a = x;
    b = y;
}
int main()
{
    complex c1;
    c1.display();
    complex c2(4, 5);
    c2.display();

    return 0;
}