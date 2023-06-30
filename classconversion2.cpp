#include <iostream>
#include <cmath>
using namespace std;
// conversion in destination object
// conversion from polar to rectangular coordinates
// rect-polar
float retangle();
float retradius();
class polar
{
    float rad, angle;

public:
    polar() {}
    polar(float c,float d)
    {
        rad = c;
        angle = d;
    }
    float retradius()
    {
        return rad;
    }
    float retangle()
    {
        return angle;
    }
    void display()
    {
        cout << "The polar coordinates are:" << rad << "," << angle << endl;
    }
};
class rectangle
{
    float length, breadth;
    public:
    rectangle() {}
    rectangle(float y,float z)
    {
        length=y;
        breadth=z;
    }
    rectangle(polar p)
    {
        length = p.retradius() * (cos(p.retangle()));
        breadth = p.retradius() * (sin(p.retangle()));
    }
    void display()
    {
        cout << "The length and breadth of rectangle are:" << length << "," << breadth << endl;
    }
};
int main()
{
    rectangle rec;
    polar pol(4,90);
    rec = pol;
    pol.display();
    rec.display();
    return 0;
}