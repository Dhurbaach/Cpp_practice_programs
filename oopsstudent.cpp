
#include<iostream>
using namespace std;
class student
{
    private:
    int stdid,ph_no;
    char addr[20],name[20];
    public:
void readdata()
{
cout<<"Enter the name of the student:";
cin>>name;
fflush(stdin);
cout<<"Enter the stdid of the student:";
cin>>stdid;
cout<<"Enter the ph_no of the student:";
cin>>ph_no;
cout<<"Enter the address of the student:";
cin>>addr;
fflush(stdin);
}
void display()
{
    cout<<"The name of the student is: "<<name<<endl;
    cout<<"The id of the student is: "<<stdid<<endl;
    cout<<"The phone number of the student is: "<<ph_no<<endl;
    cout<<"The address of the student is: "<<addr<<endl;
}
};
int main()
{
   student s1,s2;
   s1.readdata();
   s2.readdata();
   s1.display();
   s2.display();

return 0;
}