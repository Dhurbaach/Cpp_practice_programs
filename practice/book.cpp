#include<iostream>
#include<cstring>
using namespace std;
class Book
{
    int price;
    char *titl,*authr,*publis;
    public:
    Book()
    {
        int len=0;
        titl=new char[len+1];
        authr=new char[len+1];
        publis=new char[len+1];
        price=0;
    }
    Book(int a,string b,char *c,char *d)
    {
        int len;
        // len=strlen(b);
        // titl=new char[len];
        // strcpy(titl,b);
        len=strlen(c);
        authr=new char[len];
        strcpy(authr,c);
        len=strlen(d);
        publis=new char[len];
        strcpy(publis,d);
        price=a;

    }
    void disp()
    {
        cout<<"The price of the book:"<<price<<endl;
        cout<<"The title of the book:"<<titl<<endl;
        cout<<"The author of the book:"<<authr<<endl;
        cout<<"The publication of the book:"<<publis<<endl;
    }
    ~Book()
    {
        delete[]titl;
        delete[]authr;
        delete[]publis;
    }

};
int main()
{   string b;
    cout<<"Enter the title of the book";
    cin>>b;
    Book b1(123,b,"Ramhari","Godawari");
    b1.disp();
    
return 0;
}