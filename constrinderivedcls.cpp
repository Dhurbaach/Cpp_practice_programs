#include <iostream>
using namespace std;
class base1
{
    int data1;

public:
    base1(int a)
    {
        data1 = a;
        cout << "The base1 class is called here" << endl;
    }
    void print1()
    {
        cout << "The value of data1 is:" << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int b)
    {
        data2 = b;
        cout << "The base2 class is called here" << endl;
    }
    void print2()
    {
        cout << "The value of data2 is:" << data2 << endl;
    }
};
class derived : public base1, public base2
{
    int data3, data4;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        data3 = c;
        data4 = d;
        cout << "The derived class is called here" << endl;
    }
    void print3()
    {
        cout << "The value of data3 is:" << data3 << endl;
        cout << "The value of data4 is:" << data4 << endl;
    }
};
int main()
{
    derived amrit(10, 20, 30, 40);
    amrit.print1();
    amrit.print2();
    amrit.print3();
    return 0;
}