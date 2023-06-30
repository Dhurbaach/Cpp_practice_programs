#include <iostream>
using namespace std;
class Student
{
private:
    int id, age;

public:
    Student(){};
    Student(int id, int age = 12) // concept of default arguments
    {
        cout << "The id is:" << id << endl;
        cout << "The age is:" << age << endl;
    }
    ~Student()
    {
        cout << "Destructure is run here!!!" << endl;
    }
};
int main()
{
    cout << "First this executes" << endl;
    Student s1, s2;
    cout << "Enter the first object" << endl;
    s1 = Student(1);
    cout << "First destructure is called" << endl;
    cout << "Enter the second object" << endl;
    s2 = Student(2, 23);
    cout << "Second destructure is called" << endl;
    return 0;
}