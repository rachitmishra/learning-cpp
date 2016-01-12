// TO Check If The Number is a Armstrong Number
# include<iostream>
# include<cmath>
using namespace std;
class num
{
public:
int num,a,b,c;
float sum;
void get()
{
cout<<"*********************************************"<<endl;
cout<<"\nEnter THe Three Digit Number Of Your Choice "<<endl;
cin>>num;
a=num/100;
b=num%100/10;
c=num%10;
cout<<"\n*********************************************"<<endl;
cout<<"The Fst Digit Is : "<<a<<endl;
cout<<"The Secnd Digit Is : "<<b<<endl;
cout<<"The Third Digit Is : "<<c<<endl;
}
void calc()
{
sum=a*(a*a)+b*(b*b)+c*(c*c);
cout<<"Sum of Digits Is : "<<sum<<endl;
}
void comp()
{
if (sum==num)
cout<<"The Number Is A Armstrong Number"<<endl;
else
cout<<"The Number Is Not A Armstrong Number"<<endl;
}
};
int main()
{
num ob;
ob.get();
ob.calc();
ob.comp();
cout<<"\n*********************************************"<<endl;
return 0;
}