
#include <iostream>
#include <string>
using namespace std;
class binarynum
{
    string s;

public:
    void getnum();
    void checknum();
    void display();
    void getcomplement();
};

void binarynum::getnum()
{
    cout << "Enter any binary number:" << endl;
    cin >> s;
}

void binarynum ::checknum()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "The number is not binary:" << endl;
        exit(0);
        }
    }
}
void binarynum::display()
{
    cout<<"The binary number is:"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}
void binarynum::getcomplement()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

int main()
{
    binarynum b;
    b.getnum();
    b.checknum();
    b.display();
    b.getcomplement();
    b.display();
    return 0;
}