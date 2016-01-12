#include<iostream>

using namespace std;
class discount
{
public:
int size,disc;
char type;
int get()
{
cout<<"------------------------------------------\n\n";
cout<<"\nWelcome To Neo Stores\n\n";
cout<<"Enter the TV Type  : \n";
cout<<"\tPress 'B' for Black/White\n";
cout<<"\tPress 'C' for Colour\n";
cout<<"\tPress 'Q' to Quit.\n";
cout<<"------------------------------------------\n\n";
cin>>type;
switch(type)
                {

case 'B':
case 'b':  cout<<"For Black & White Television : ";
               cout<<"\n*** You Got A 5% Discount ***";
           
			   break;
case 'C' : 
case 'c' :  cout<<" \nFor Colour Television : \n\n";
                cout<<"Please Enter Your T.V Size : \n\n";
				cin>>size;
				if(size>=29)
				cout<<"\n*** You Got A 25% Discount ***";
				else if(size>=27)
				cout<<"\n*** You Got A 15% Discount ***";
				else if(size>=21)
				cout<<"\n*** You Got A 10% Discount ***";
				else 
				cout<<"\n*** Sorry !! No Discount Available !! ***";
				break;
case 'Q' :
case 'q' :  return 0;
                 break;				 
default : cout<<"\n\n Please Enter Your Right Choice\n";				 
				}
				    cout<<"\n\nEnjoy Shopping !!";
cout<<"\n------------------------------------------\n\n";


}
};

int main()
{
discount ob;
cout<<endl;
ob.get();
return 0;
}