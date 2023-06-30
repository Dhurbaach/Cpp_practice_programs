#include <iostream>
using namespace std;
class base
{
public:
    int var_base;
    void display()
    {
        cout << "The value of base variable is:" << var_base << endl;
    }
};
class derived : public base
{
public:
    int var_derived;
    void display()
    {
        cout << "The value of derived variable is:" << var_derived << endl;
    }
};

int main()
{
    base *base_pointer;
    base obj_base;
    derived *derived_pointer;
    derived obj_derived;
    derived_pointer = &obj_derived;
    /*
        derived_pointer=&obj_base;/This can not happen.
        base_pointer=&obj_base; /This can happen.
    */
    base_pointer = &obj_derived;
    base_pointer->var_base = 90;
    // base_pointer->var_derived; Throws an error
    base_pointer->display();
    derived_pointer->var_derived = 94;
    derived_pointer->var_base = 91;
    derived_pointer->display();//only runs the function of derived class
    derived_pointer->display();
    return 0;
}