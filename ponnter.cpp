#include <iostream>
using namespace std;
class ab
{
    int a, b;

public:
    void set(int k, int l)
    {
       a=k;
       b=l;
    }
    void display()
    {
        cout << "The value of a and b is :" << a << "," << b << endl;
    }
};
int main()
{
    // {   ab obj1;
    //    ab *ptr=&obj1;
    ab *ptr = new ab;
    ptr->set(4,5);
    ptr->display();
    return 0;
}