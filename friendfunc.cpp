#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    friend complex sumnum(complex c1, complex c2);
    void getnum(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void display()
    {
        cout << "The complex number is" << a << "+" << b << "i" << endl;
    }
};
complex sumnum(complex c1, complex c2)
{
    complex c3;
    c3.getnum(c1.a + c2.a, c1.b + c2.b);
    return c3;
}
int main()
{
    complex o1, o2, o3;
    o1.getnum(2, 3);
    o1.display();
    o2.getnum(4, 5);
    o2.display();
    o3 = sumnum(o1, o2);
    o3.display();
    return 0;
}
//Properties of friend function
/*
1.It is not in the scope of class.
2.Since it is not in the scope of class you can't be called from the object of that class. Ex.o3.sumnum()==Invalid!
3.Can be invoked without help of any objects.
4.Usually contains objects as arguments(so that you can access their private data).
5.Can be declared inside public or private section of the class.
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/