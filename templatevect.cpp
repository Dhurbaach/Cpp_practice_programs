#include<iostream>
using namespace std;
template<class T>
class vector
{
    public:
    int size;
    T* arr;
    vector(int m)
    {
        size=m;
        arr=new T(size);
    }
    T dotproduct(vector v)
    {
        T k=0;
        for (int i = 0; i < size; i++)
        {
            k+=this->arr[i]*v.arr[i];
        }
        return k;
    }
};
int main()
{
    vector <int>v1(3);
    vector<int>v2(3);
     v1.arr[0]=4;
     v1.arr[1]=5;
     v1.arr[2]=6;

     v2.arr[0]=3;
     v2.arr[1]=4;
     v2.arr[2]=1;
    int y= v1.dotproduct(v2);
    cout<<"The product of two vectors is:"<<y<<endl;
return 0;
}