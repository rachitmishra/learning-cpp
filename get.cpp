#include<iostream>
using namespace std;

int main()
{
char ch='r', STR[20];
cout<<"Enter a String ";
cin.get(STR,10);
cout<<STR<<endl<<"Enter a String ";
cin.get(STR,10,ch);
cout<<STR;
return 0;
}