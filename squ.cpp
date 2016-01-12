#include<iostream>
using namespace std;
class square
{
public:
int i,s;
void print()
{
for(i=1;i<=10;i++)
{
s=i*i;
cout<<s<<endl;
}
}
};

int main()
{
square ob;
cout<<endl;
ob.print();
return 0;
}