#include <iostream>
using namespace std;
class student
{
protected:
    int rollno;

public:
    void setrollno();
};
void student::setrollno()
{
    cout<<"Enter the roll no:"<<endl;
    cin>>rollno;
}
class marks : public student
{
protected:
    int m1, m2;

public:
    void setmark(int, int);
};
void marks::setmark(int x, int y)
{
    m1 = x;
    m2 = y;
}
class result : public marks
{
public:
    float per(int m1,int m2)
    {
        return(((m1+m2)/2));
    }
    void display()
    {
        cout << "The roll no of the student is:" << rollno << endl;
        cout << "The marks in maths of  the student is:" << m1 << endl;
        cout << "The marks in physics of of the student is:" << m2 << endl;
        cout << "The percentage of the student is:" <<per(m1,m2)<<"%"<< endl;
    }
};
int main()
{
    result Dhurba;
    Dhurba.setrollno();
    Dhurba.setmark(94, 96);
    Dhurba.display();

    return 0;
}