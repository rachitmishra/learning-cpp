#include<iostream>
using namespace std;

class biller
{

public:
int i,j,k;
char name[6];
int numn[ 5][2];


void get( )
{
for (i=0; i<6; i++)
{
cout<<"Enter the name :  "<<endl;
cin>>name[i];
}
for (j=0;j<6;j++)
{
cout<<"Enter the No# :  "<<endl;
cin>>numn[j];
{
for (k=0;k<2;k++)
cout<<"Enter the Amount :  "<<endl;
cin>>numn[j][k];
}
}

}

void display()
{
int i , j , k;
for(i=0;i<6;i++)
{
cout<<name[i];
}

for(j=0;j<6;j++)
{
cout<<num[j];
{
for(k=0;k<6;k++)
cout<<num[k];
}
}

}

};

int main()

{
biller ob;
cout<<"Billing Details are : "<<endl;
ob.get();
ob.display();

return 0;
}
