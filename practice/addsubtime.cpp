#include <iostream>
using namespace std;
class tim
{
private:
    int hr, min, sec;

public:
    tim() {}
    tim(int a, int b, int c) : hr(a), min(b), sec(c) {}
    friend tim sub(tim k ,tim l);
    void display()
    {
        cout << "Time is:" << hr << ":Hr" << min << ":Min" << sec << ":Sec" << endl;
    }
};
    tim sub(tim k, tim l)
    {
        tim t3;
        t3.hr = k.hr - l.hr;
        t3.min = k.min - l.min;
        t3.sec = k.sec -l.sec;
        return t3;
    }
int main()
{
    tim t1(4, 50, 45), t2(3, 23, 47), t3;
    t1.display();
    t2.display();
    t3=sub(t1,t2);
    t3.display();

    return 0;
}