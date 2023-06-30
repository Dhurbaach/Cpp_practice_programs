#include<iostream>
using namespace std;
template<class t1,class t2,class t3=char>//templates with dafault arguments
class any
{
    t1 dat1;
    t2 dat2;
    t3 dat3;
    public:
    any(t1 a,t2 b,t3 c)
    {
        dat1=a;
        dat2=b;
        dat3=c;
    }
    void disp()
    {
        cout<<"The values are:"<<endl<<dat1<<endl<<dat2;
    }
};
int main()
{
  any<int ,string> obj(12,"hello",'c');
  obj.disp();  
return 0;
}