/*student-test
student-sport
sport-result
test-result*/
#include <iostream>
using namespace std;
class student
{
protected:
    int a;

public:
    void set_roll()
    {
        cout << "Enter your roll no:" << endl;
        cin >> a;
    }
    void printroll()
    {
        cout << "Your roll no is:" << a << endl;
    }
};
class test : virtual public student
{
protected:
    int m, p;

public:
    void marks()
    {
        cout << "Enter the marks in maths" << endl;
        cin >> m;
        cout << "Enter the marks in Physics" << endl;
        cin >> p;
    }
    void printmarks()
    {
        cout << "The marks in Maths is:" << m << endl;
        cout << "The marks in Physics is:" << p << endl;
    }
};
class sports : virtual public student
{
protected:
    int score;

public:
    void scor()
    {
        cout << "Enter the match score:" << endl;
        cin >> score;
    }
    void printscore()
    {
        cout << "The score is:" << score << endl;
    }
};
class result : public test, public sports
{
protected:
    int res;

public:
    void display()
    {
        printroll();
        printmarks();
        printscore();
        cout << "The total marks is:" << m + p << endl;
    }
};
int main()
{
    result hari;
    hari.set_roll();
    hari.marks();
    hari.scor();
    hari.display();
    return 0;
}