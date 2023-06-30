/*
return the average of two numbers to the smaller one 
*/

#include <iostream>
using namespace std;
float &small(float &a, float &b);

int main()
{
    float a, b, average;
    cout << "Enter the value of a and b:";
    cin >> a>> b;
    // small(a,b);
    cout << "value of a and b before assigning valule is:" << a << "," << b << endl;
    average=(a+b)/2;
    small(a, b) = average;
    cout << "value of a and b after assigning valule is:" << a << "," << b << endl;

    return 0;
}
float &small(float &a, float &b)
{
    if (a < b)
    {
        return (a);
    }
    else
    {
        return (b);
    }
}