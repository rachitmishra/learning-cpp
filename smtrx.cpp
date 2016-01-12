#include<iostream>


using namespace std;



class matrix

{

public:
int i,j,row_no,col_no;

int mx[3][3],r_c_add[4][4];



void input()
{
cout<<"Enter Contents of Matrix : \n"<<endl;
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
cin>>mx[i][j];
}
}



void r_c_summer()
{
int k=3;

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
r_c_add[i][j]=mx[i][j];
}
}

for(i=0;i<3;i++)
{
int sum=0;
for(j=0;j<3;j++)
{

	sum+=mx[j][i];

	r_c_add[k][i]=sum;
}
cout<<sum;
}

for(i=0;i<3;i++)
{
int sum=0;
	for(j=0;j<3;j++)
	{
		sum+=mx[i][j];
		r_c_add[i][k]=sum;
	}
}

for(i=0;i<4;i++)
{
cout<<"\n";
for(j=0;j<4;j++)
cout<<r_c_add[i][j]<<"\t";
}

}


}
ob;



int  main()
{

int ch;
char ch_;



do
{

cout<<"\n\nWhat You You want to do : "<<endl;
cout<<"1.Print entered Matrix\n";
cout<<"2.Display the Row Wise and Column Wise Total."<<endl;
cout<<"3.Reverse Contents of a Specific Row."<<endl;
cout<<"4.Reverse Contents of a Specific Column."<<endl;
cout<<"5.Reverse the Order of the Row."<<endl;
cout<<"6.Reverse the Order of the Column."<<endl;
cout<<"7.Sort the contents of a specific Row Or Column."<<endl;
cout<<"8.Print Transpose Of Matrix."<<endl;
cout<<"9.Quit."<<endl;
cout<<"Enter your Choice (1-8)."<<endl;
cin>>ch;
ob.input();
switch(ch)
{
case 1: //ob.printer();
			break;
case 2:  ob.r_c_summer();
			break;
case 3:// ob.r_reverser();
			break;
case 4: //ob.c_reverser();
			break;
case 5: //ob.r_o_reverser();
			break;
case 6: //ob.c_o_reverser();
			break;
case 7: //ob.sorter();
			break;
case 8: //ob.transposer();
			break;
case 9: return 0;
			break;

default:cout<<"Please enter any of choices "<<endl;
}
cout<< "\nWant again(Y/N)\n";
cin>>ch_;
}while(ch_=='Y'||ch_=='y');	
return 0;
}