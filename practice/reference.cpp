#include <iostream>
using namespace std;
int &swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    return b; //if returned a gives a=12 output
}
int main()
{
    int a = 5;
    int b = 6;
    cout << "value before swapping: a= " << a << " b=" << b << endl;
    swap(a, b) = 12;
    // swap(a, b); // called by c++ reference variable concept
    cout << "value after swapping: a= " << a << " b=" << b << endl;
    return 0;
}