#include <iostream>
#include <list>
// #include<vector>
using namespace std;

void display(list<int> &k)
{
    list<int>::iterator ptr = k.begin();
    for (ptr = k.begin(); ptr != k.end(); ptr++)
    {
        cout << "The elements of the lists are:" << *ptr<<endl;
    }
    cout<<endl;
}
int main()
{
    list<int> lis;
    int element, size = 5;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element in the list:";
        cin>>element;
        lis.push_back(element);
    }
    cout<<endl;
    display(lis);
    lis.pop_back();//removing from last
    display(lis);
    lis.remove(9);//removing specific element 
    display(lis);
    list<int> list2;
    list2.push_back(4);
    list2.push_back(56);
    display(list2);
    lis.sort();//sorting list
    display(lis);
    lis.merge(list2);//merging two lists
    display(lis);
    return 0;
}