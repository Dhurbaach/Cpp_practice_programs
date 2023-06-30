#include<iostream>
using namespace std;
int c=78;
int main()
{
    int c=45;
    int a=2,b=4,e=6;
    cout<<"The local value of c is: "<<c;
    cout << "\nThe global vlaue of c is: "<<::c;
    cout<<"\nThe value of a>b is :"<<(a>b);
}