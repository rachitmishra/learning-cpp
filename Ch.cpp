#include<iostream>

using namespace std;
class choice
{
public:
int a,b,res,ch;
char sel;


void get()
{

do
{
cout<<"\n\nWhat You Want To Do : \n\n";
cout<<"\t1.Summation\n";
cout<<"\t2.Substraction\n";
cout<<"\t3.Multiplication\n";
cout<<"\t4.Divide\n";

cin>>ch;
cout<<"Enter the First Number \n";
cin>>a;
cout<<"Enter the Second Number \n";
cin>>b;
cout<<"--------------------------------------------------\n"<<endl;


switch(ch)
{

case 1 :  res=a+b;
			   cout<<"Summation is : "<<res;
			   break;
case 2 :  
               if(b>a)
			   res=b-a;
			   else
			   res=a-b;
			   cout<<"Substraction is : "<<res;
			   break;
case 3 :  
               res=a*b;
			   cout<<"Multiplication is : "<<res;
			   break;
case 4 :  
               if(b>a)
               res=b/a;
			   else
			   res=a/b;
		   
			   cout<<"Division is : "<<res;
			   break;		   
default : 
              cout<<"\nEnter Correct Choice";
}
cout<<"\n__________________\n";
cout<<"\nDo You Want TO Continue Y\\N\n";
cin>>sel;
}while(sel=='Y'||sel=='y');
}
};

int main()
{
choice ob;
cout<<endl;
ob.get();
return 0;
}