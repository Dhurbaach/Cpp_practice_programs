#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fpt("hari.txt");
    //fpt.open("hari.txt");
    fpt<<"My name is Dhurba Raj Acharya";
    fpt.close();
    ifstream fptr("hari.txt");
    //fptr.open("hari.txt");
    string k;
    //string k1,k2;
    //fptr>>k1>>k2;
    // fptr>>k;
    getline(fptr,k);
    cout<<"The contents of the files are:"<<k;
    fptr.close();
return 0;
}