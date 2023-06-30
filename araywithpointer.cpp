#include <iostream>
using namespace std;
class shop
{
private:
    int id;
    float price;

public:
    void setdata(int k, float l)
    {
        id = k;
        price = l;
    }
    void dispdata()
    {
        cout << "Id of this item:" << id << endl;
        cout << "Price of this item:" << price << endl;
    }
};
int main()
{
    int a, b;
    int size;
    cout << "Enter the no of items you want to enter:" << endl;
    cin >> size;
    shop *ptr = new shop[size];
    shop *ptr2 = ptr;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the id of item " << i + 1 << endl;
        cin >> a;
        cout << "Enter the price of this item " << endl;
        cin >> b;
        ptr->setdata(a, b);
        // (*ptr).setdata(a,b);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Item no:" << i + 1 << endl;
        ptr2->dispdata();
        ptr2++;
    }

    return 0;
}