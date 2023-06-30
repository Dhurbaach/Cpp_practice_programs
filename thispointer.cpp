#include <iostream>
using namespace std;
class amr
{
private:
    int a;

public:
    amr &setdata(int a)
    {
        this->a = a;
        return *this;
    }
    void disp()
    {
        cout << "The value of a is =" << a << endl;
    }
};
int main()
{
    amr b;
    b.setdata(56).disp();
    b.disp();
    return 0;
}