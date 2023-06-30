#include <iostream>
using namespace std;
template <class t>
class amrit
{
    t cast;

public:
    amrit(t a)
    {
        cast = a;
    }
    void display();
};
template <class t> // writing template function out of the class
void amrit<t>::display()
{
    cout << "The value is:" << cast << endl;
}
void func1(int a)//function overloading with templates
{
    cout << "This is function without template:" << a << endl;
}
template <class t>
void func1(t a)
{
    cout << "This is function with template:" << a << endl;
}
int main()
{
    amrit<float> amr(4.5);
    amr.display();
    func1(4);
    func1(6.78); // function with higher priority gets called
    return 0;
}