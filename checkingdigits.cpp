// Checking The Digits Of any Three Digit Number.

# include<iostream>
using namespace std;
class calc
{
public:
int num,b,c,a;
void get()
{
cout<<"Enter Three Digit No. : "<<endl;
cin>>num;
a=num/100;
b=num%100/10;
c=num%10;
cout<<"Fst Digit : "<<a<<endl;;
cout<<"Sec. Digit : "<<b<<endl;
cout<<"Third Digit : "<<c<<endl;
}
};
int main()
{
calc ob;
ob.get();
return 0;
}