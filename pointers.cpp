#include<iostream>
using namespace std;

int main()
{
    int a=5;
    int* b=&a;
    int** c=&b;
    cout<<"The value of address of a is:"<<&a<<endl;
    cout<<"The value of address of a is:"<<b<<endl;
    cout<<"The value at address of a is:"<<*b<<endl;
    cout<<"For the variabel b"<<endl;
    cout<<"The value of address of b is:"<<&b<<endl;
    cout<<"The value of address of b is:"<<c<<endl;
    cout<<"The value at address of b gives adress of a:"<<*c<<endl;
    cout<<"The value at address of(address of ) b is:"<<**c<<endl;
    
return 0;
}