#include<iostream>
using namespace std;
class box
{
    public:
    box()
    {
        cout<<"This is constructor"<<endl;
    }
    ~box()
    {
        cout <<"This is destructor"<<endl;
    }
};
int main()
{

    box b1;
   { box b3,b2;
   }
   box b3;
}