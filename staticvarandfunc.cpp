
#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;

public:
    void getid()
{
    cout << "Enter the id of the employee:" << endl;
    cin >> id;
    count++;
}
    void display()
{
    cout << "The id of the employee "<<count<<" is: "<< id << endl;
}
static void getcount()
{
    cout<<"The value of the count is:"<<count<<endl;
}
};
int Employee:: count;

int main()
{
    Employee e1, e2;
    e1.getid();
    e1.display();
    Employee::getcount();

    e2.getid();
    e2.display();
    Employee::getcount();
    return 0;
}