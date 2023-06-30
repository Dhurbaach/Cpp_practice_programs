#include<iostream>
using namespace std;
class base1
{
    public:
    void disp()//function overriding
    {
        cout<<"Hello world:"<<endl;
    }
};
class base2
{
    public:
    void disp()
    {
        cout<<"Hello beautiful people:"<<endl;
    }
};
class derived:public base1,public base2
{
    public:
 void disp()
 {
    base2::disp();
 }
};
int main()
{
    derived obj;
    obj.disp();
return 0;
}