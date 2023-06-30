#include <iostream>
using namespace std;
class complex
{
private:
    int a;
    int b;

public:
    void getnum(int a, int b);
    void sumcomp(complex c, complex d);
    void display();
};
void complex::getnum(int a1, int b1)
{
    a = a1;
    b = b1;
}
void complex::sumcomp(complex c1, complex d1) // Object as function argument
{
    a = c1.a + d1.a;
    b = c1.b + d1.b;
}
void complex::display()
{
    cout << "The complex numbers are:" << a << "+" << b << "i" << endl;
}
int main()
{ // Using array of function
    //   complex n[3];
    //   for (int i = 0; i <3; i++)
    //   {
    //    n[i].getnum(2,3);
    //    n[i].sumcomp(4,6);
    //    n[i].display();
    //   }
    complex c1, c2, c3;
    c1.getnum(2, 3);
    c1.display();
    c2.getnum(4, 5);
    c2.display();
    c3.sumcomp(c1, c2);
    c3.display();
    return 0;
}