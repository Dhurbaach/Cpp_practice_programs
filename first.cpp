#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box{
    int len,bre,hei;
    public:
    Box() {
        len=0,bre=0,hei=0;
    }
    Box(int l,int b,int h)
    {
      len=l; 
      bre=b;
      hei=h; 
    }
    Box(const Box &B)
    {
     len=B.len;
     bre=B.bre;
     hei=B.hei;
    }
    bool operator<(Box &B){
    if(len < B.len || bre < B.bre &&   len == B.len || hei < B.hei &&len == B.len && bre == B.bre){
      return true;
    }
    return false;
    }
    int getLength()
    {
        return len;
    }
    int getBreadth()
    {
        return bre;
    }
    int getHeight()
    {
        return hei;
    }
    long long int CalculateVolume()
    {
        return len*bre*hei;
    }
    friend ostream& operator <<(ostream &os,const Box &C);
    
};
 ostream& operator <<(ostream& os,const Box &C)
    {
      os<<C.len<<" "<<C.bre<<" "<<C.hei;
      return os;  
    }

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}