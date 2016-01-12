// Creating Linked Lists // 

#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class node
{
public:

char name[15];
int age;

node *next;
};

class list : public node
{
public:


node *start;
node *last;

list()
{
start=NULL;
}

void creater()
{
char ch='Y';
while(ch=='Y')
{
cout<<"\nEnter First Name : ";
cin>>name;
cout<<"\nEnter Age : ";
cin>>age;
node *M;
node *N = new node;

last=N;

strcpy (N->name,name);
N->age=age;

if(start==NULL)
{
start= N;
N->next=NULL;
last=N;
}
else
{
for(M=start;M->next!=NULL;M=M->next);
M->next=N;
N->next=NULL;
last=N;
}


cout<<"\n Enter more data(Y/N) : ";
cin>>ch;
}

}

void deleter(int a)
{
node *M;

if(a==1)
{
start=start->next;
}
else if(a==2)
{
for(M=start;M->next!=NULL;M=M->next);
last=M->next;
}
/*else if(a==3)
{
}*/
}

void displayer()

{
node *c;

for(c=start;c!=NULL;c=c->next)
{
cout<<endl;
cout<<c->name<<"\t"<<c->age;
}
cout<<endl;
}

};
main()

{
int ch_,ch__,data;
char ch;
do
{
cout<<"\n\tWhat You Want to do :";
cout<<"\n\t1.Create Data List ";
cout<<"\n\t2.Add Data to List ";
cout<<"\n\t3.Delete Data from List ";
cout<<"\n\t4.Display  Data List ";
cout<<"\n\t5.Search List";
cout<<"\n\t6.Exit.\n";
list obj;
cin>>ch_;

switch(ch_)
{
case 1: cout<<"\n Let's Begin ";
				obj.creater();
				break;
case 2: cout<<"\nModule not ready";
				break;
case 3:cout<<"\n\tWhat you want to delete :";
			cout<<"\n\t1. First Data :";
			cout<<"\n\t2.ast Data :";
			cin>>ch__;
			switch(ch__)
			{
			case 1:obj.deleter(1);
						break;
			case 2:obj.deleter(2);
						break;
			default:cout<<"\noYe";
			}
			break;
case 4: cout<<"Data List Has : ";
				obj.displayer();
				break;
case 5: cout<<"\nEnter Data to be searched : ";
			cin>>data;
			//obj.searcher(data);
				break;
case 6: return 0;
				break;
default: cout<<"\nEnter any choice";
}

cout<<"\n\nAgain(Y/N)";
cin>>ch;
}while(ch=='Y'||'y');


}

