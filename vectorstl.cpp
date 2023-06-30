#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v1;
    int size, element;
    cout<<"Enter the size of the vector :";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element to your vector:";
        cin >> element;
        v1.push_back(element);
    }
    display(v1);
    v1.pop_back();//removes
    display(v1);
    //inserting element to desired location
    vector<int>::iterator ptr =v1.begin();
   v1.insert(ptr,45,50);
   display(v1);
   vector<int> vec1;      //zero length integer vector
    vector<char> vec2(4);  //4-element character vector
    vector<char> vec3(vec2);//4-element character vector from vec2
    vector<int> vec4(6,3); //6-element vector of 3s
    display(vec4);
    return 0;
}