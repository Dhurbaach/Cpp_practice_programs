#include <iostream>
#include <cmath>
using namespace std;
class point
{
private:
    int a, b;

public:
    point(int x, int y)
    {
        a = x;
        b = y;
    }
    friend void distance(point, point);
    void display()
    {
        cout << "The point is" << a << "," << b << endl;
    }
};
void distance(point a1, point a2)
{
    float k;
    k = sqrt(pow((a2.a - a1.a),2)+pow((a2.b - a1.b),2));
    cout << "The distance between two points is:" << k << endl;
}
int main()
{
    point a1(0, 1);
    point a2(0, 6);
    a1.display();
    a2.display();
    distance(a1, a2);

    return 0;
}