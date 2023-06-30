#include <iostream>
using namespace std;
class area
{
public:
    int areas(int a);
    int areas(int l, int b);
    float areas(float r);
};
int area::areas(int a)
{
    return (a * a);
}
int area::areas(int l, int b)
{
    return (l * b);
}
float area::areas(float r)
{
    return (3.14 * r * r);
}
int main()
{   int a,b,l;
    float r;
    area a1, a2, a3;

    cout << "Enter side of square:" << endl;
    cin >> a;
    cout << "Enter length and breadth of a rectangle:" << endl;
    cin >> l >> b;
    cout << "Enter radius of a circle:" << endl;
    cin >> r;

   cout<<"The aera of square is:"<< a1.areas(a)<<endl;
    cout<<"The area of rectangle is:"<<a1.areas(l, b)<<endl;
    cout<<"The area of circle is:"<<a1.areas(r);
}