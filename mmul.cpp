#include <iostream>
using namespace std;

class matrix
{
	public:
	int mat1[4][4];
	int mat2[4][4];
	int mul[4][4];
	int sum[4][4], i, j, k,h,temp;
	void get()
	{
		cout<<"Please enter the value of first Matrix :-"<<endl;
		for(i=1;i<4;i++)
		{
			for(j=1;j<4;j++)
			{
				cout<<i<<j<<": ";
				cin>>mat1[i][j];
			}
		}
		cout<<"Please enter the value of Second Matrix :-"<<endl;
		for(k=1;k<4;k++)
		{
			for(h=1;h<4;h++)
			{
				cout<<k<<h<<": ";
				cin>>mat2[k][h];
			}
		}
		for(i=1;i<4;i++)
		{
			  for(j=1;j<4;j++)
			  {
					int temp=0;
					for(k=1;k<4;k++)
					{
						temp+=mat1[i][k]*mat2[k][j];
					}
					mul[i][j]=temp;
					cout<<mul[i][j];
			} cout<<endl;
		}
	}
};

	main()
{
	matrix o;
	o.get();
	
}