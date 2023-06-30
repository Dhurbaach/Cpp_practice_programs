#include<iostream>
using namespace std;
struct employee
{
    char name[20];
    int id,dob,age;
    float salary;
};

int main()
{
    int n,i;
    cout<<"How many numbers of employees:";
    cin>>n;
struct employee emp[n];
for (int i = 0; i < n; i++)
{
cout<<"Enter the name of the employee:"<<endl;
cin>>emp[i].name;
fflush(stdin);
cout<<"Enter the date of birth of the employee:"<<endl;
cin>>emp[i].dob;
cout<<"Enter the age of the employee:"<<endl;
cin>>emp[i].age;
cout<<"Enter the salary of the employee:"<<endl;
cin>>emp[i].salary;
}
for (int i = 0; i <n; i++)
{
   cout<<"The name of the employee "<<i<<"is "<<emp[i].name<<endl;
   cout<<"The date of birth of the employee "<<i<<"is "<<emp[i].dob<<endl;
   cout<<"The age of the employee "<<i<<"is "<<emp[i].age<<endl;
   cout<<"The slary of the employee "<<i<<"is "<<emp[i].salary<<endl;
}

return 0;
}