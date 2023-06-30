#include<iostream>
using namespace std;

int main()
{
    int i;
    for (int i = 0; i < 50; i++)
    {
        if(i==100)
        {
            break;
        }
        if(i==6)
        {
            continue;
        }
        cout<<"The numbers are:"<<i<<endl;
    }
    
return 0;
}