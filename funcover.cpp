#include<iostream>
using namespace std;
void operation(int a)
{ 
    cout<<"The area of the square is:"<<a*a<<endl;
}
void operation(float b)
{
    cout<<"The area of the circle is:"<<(3.141*b*b)<<endl;
}
void operation(int l,int br)
{
    cout<<"The area of the rectangle is:"<<l*br<<endl;
}
int main()
{
    float k=9;
  operation(2);
  operation(k);
  operation(4,5);

return 0;
}


