#include <iostream>

using namespace std;



class matrix

{

public:
int i,j,k,mx1[3][3],mx2[3][3],mx[3][3];



void get()

{

cout<<"Enter Contents of First matrix : \n"<<;

for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{

cin>>mx1[i][j];

}
}

cout<<"Enter Contents of Second matrix : \n"<<;

for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{

cin>>mx1[i][j];

}
}

}
};

void print()

{

cout<<"matrix Entered Are : \n");


for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{

cout<<mx1[i][j];
cout<<"\t";

}
}

for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{

cout<<mx1[i][j];
cout<<"\t";

}
}

}
};


main()
{
matrix ob;
ob.get();
ob.print();

}