#include<iostream>

using namespace std;

class matrix

{

public:
int i,j,k,l,mx1[3][3] , mx2[3][3], mx3[3][3];



void get()
{
cout<<"Enter Contents of First matrix : \n"<<endl;
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
cin>>mx1[i][j];
}

cout<<"Enter Contents of Second matrix : \n"<<endl;

for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
cin>>mx1[i][j];

fflush(stdin);
}
}

void print()

{

cout<<"Matrix Entered Are : \n"<<endl;


for(i=0;i<3;i++)
{
cout<<"\n";
for(j=0;j<3;j++)

{
cout<<mx1[k][l];
cout<<"\t";
}
}

for(i=0;i<3;i++)
{

cout<<"\n";

for(j=0;j<3;j++)
{

cout<< mx2[i][j];
cout<<"\t";

}
}

}
};


int main()
{
matrix ob;
ob.get();
ob.print();

return 0;
}