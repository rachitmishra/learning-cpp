#include<iostream>
#include<cmath>

using namespace std;
class square
{
public:
int i,s,t;
void get()
{
cout<<"Enter the No. You Desire For Table\n\n";
cin>>i;
cout<<"-------------------------\n"<<endl;
cout<<"The Table of "<<i<< " is : \n\n";
}
void calc()
{
for(t=1;t<=10;t++)
{
s=t*i;
cout<<i<<" X "<<t<<" =";
cout<<s<<endl;
}
}
};

int main()
{
square ob;
cout<<endl;
ob.get();
ob.calc();
cout<<"-------------------------\n"<<endl;
return 0;
}