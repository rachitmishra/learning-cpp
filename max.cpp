// accpet three no.s and display the highest one.
#include<iostream>
using namespace std;
class maxi
{
public:
int a,b,c;
void get_comp()
{
cout<<"Enter Ist Number : "<<endl;
cin>>a;
cout<<"Enter IInd Number : "<<endl;
cin>>b;
cout<<"Enter IIIrd Number : "<<endl;
cin>>c;
if (a>b&&a>c)
cout<<"No.Greater is : "<<a;
if (b>c&&b>a)
cout<<"No.Greater is : "<<b;
if(c>a&&c>b)
cout<<"No.Greater is : "<<c;
}
};

int main()
{
maxi ob;
ob.get_comp();
}