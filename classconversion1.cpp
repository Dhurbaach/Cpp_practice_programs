#include <iostream>
#include <cmath>
using namespace std;
//conversion in source object 
//conversion from polar to rectangular coordinates
class rect
{
    float len, bre;

public:
    rect() {}
    rect(float x, float y)
    {
        len = x;
        bre = y;
    }
    void display()
    {
        cout << "The rectangular coordinates are:" << len << "," << bre << endl;
    }
};
class polar
{
    float angle, rad;

public:
    polar() {}
    polar(float a, float r)
    {
        angle = a;
        rad = r;
    }
    operator rect()
    {
        float c, d;
        c = rad * cos(angle);
        d = rad * sin(angle);
        return rect(c, d);
    }
    void display()
    {
        cout << "The polar coordinates are:" << rad << "," << angle << endl;
    }
};
int main()
{
    rect objrec;
    polar objpol(60, 4);
    objpol.display();
    objrec = objpol;
    objrec.display();
    return 0;
}