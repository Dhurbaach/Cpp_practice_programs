#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age:\n";
    cin>>age;
    switch (age)
    {
    case 12:
       cout<<"You are 12 years old\n";
        break;
    case 1:
    cout<<"You are 1 years old\n";
    break;
    default:
    cout<<"No special entry";
        break;
    }
    return 0;
}