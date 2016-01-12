#include<iostream>
using namespace std;
class reverse
{
public:
char source[150],dest[151];
int pos,j;

void get()
{
cout<<"\nEnter Your Sentence to Encrpyt\n\n";
cin>>source;
cout<<"\n\nYou Entered : \n\n"<<source<<endl;

while (source[pos]!='\0')
{
pos=pos+1;
cout<<pos;
}  
//for(--pos;pos>=0;dest[j++]=source[pos--]);
//dest[j]='\0';
cout<<"\nEncypted Sentense Is : \n"<<dest<<endl;
}
};

int main()
{
 reverse ob;
 ob.get();
 return 0;
 }
