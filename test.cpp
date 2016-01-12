#include<iostream>
using namespace std;
class node
{
public:

char name[15];

void get()
{

char ch='Y';
while(ch=='Y')
{
cout<<"\nEnter First Name : ";
cin>>name;
cout<<"\n More(Y/N) : ";
cin>>ch;
}
}
};

main()
{

node obj;
obj.get();

}