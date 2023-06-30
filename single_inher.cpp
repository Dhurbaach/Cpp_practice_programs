#include <iostream>
using namespace std;
class base
{
private:
    int data1;

public:
    int data2;
    void setdata()
    {
        data1 = 10;
        data2 = 20;
    }
    int getdata1()
    {
        return (data1);
    }
};
class derived : private base
{
private:
    int data3;

public:
    void process();
    void display();
};
void derived::process()
{
    setdata();
    data3 = data2 * getdata1();
}
void derived::display()
{
    cout << "The value of data1 is:" << getdata1() << endl;
    cout << "The value of data2 is:" << data2 << endl;
    cout << "The value of data3 is:" << data3 << endl;
}
int main()
{
    derived obj1;
    // obj1.setdata();
    obj1.process();
    obj1.display();
    return 0;
}