#include <iostream>
using namespace std;
class times
{
    int hr, min;

public:
    times(int x, int y)
    {
        hr = x;
        min = y;
    }
    operator int()
    {
        int bas;
        bas = (hr * 60) + min;
        return bas;
    }
};
int main()
{
    times t1(2, 30);
    int bas;
    bas = t1;
    cout << "The value of basic data type is:" << bas << endl;
    return 0;
}