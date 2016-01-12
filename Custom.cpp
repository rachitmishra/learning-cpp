#include<iostream>
using namespace std;
class custom
{
float amounts[10];
public :
void sort ()
{
int ctr;
for (ctr=0;ctr<10;ctr++)
{
cout<<"Enter The Amount : ";
cin>>amounts[ctr];
}

int counter=0;
while (counter<9)
{
float temp;
if(amounts[counter]>amounts[counter+1])
{
temp=amounts[counter];
amounts[counter]=amounts[counter+1];
amounts[counter+1]=temp;
counter=0;
continue;
}
counter++;
}
}
void disp()
{

for(int counter=0;counter<10;++counter)
{
cout<<"Element "<<counter<<": "<<amounts[counter]<<endl;
}
}
};
int main()
{
custom ob;
ob.sort();
ob.disp();
return 0;
}
