#include<iostream>
using namespace std;
class amrit
{
    int b;
    int a;
    public:
    // amrit(int i,int j):a(i),b(j)
    // amrit(int i,int j):a(i),b(i+j)
    // amrit(int i,int j):a(i),b(2*j)
    // amrit(int i,int j):a(i),b(a+j)
    amrit(int i,int j):b(j),a(i+b)//creates problem because a is daclared first so write b first
    {
        cout<<"The value of a is :"<<a<<endl;        
        cout<<"The value of b is :"<<b<<endl;        

    }
};
int main()
{
  amrit amr(4,5);   
return 0;
}