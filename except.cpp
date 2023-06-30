 #include<iostream>
 #include<exception>
 using namespace std;
 
 int main()
 {
    int a,b;
    cout<<"Enter the value of and b";
    cin>>a>>b;
    int c;
    void error() throw(char)
    {
        catch(int e)
        {
            cout<<"Error divided by"<<e;
        }
        catch(const char *e)
        {
            cout<<e;
        }
    }
    try{
        if(b==0)
        throw"Exception has occured";
         c=a/b;
         cout<<c<<endl;     
    }
 return 0;
 }