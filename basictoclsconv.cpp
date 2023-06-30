#include <iostream>
using namespace std;
class times
{
private:
    int hr, min;

public:
    times() {}
    times(int z)
    {
        hr = z / 60;
        min = z % 60;
    }
    void display()
    {
        cout << "The time is :" << hr << "hrs : " << min << "mins" << endl;
    }
};
int main()
{
    times t1;
    int z = 150;
    t1 = z;
    t1.display();
    return 0;
}