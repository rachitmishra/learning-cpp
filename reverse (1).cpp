#include<iostream>
using namespace std;
class reverse
{
public:
int i;
void print()
{
for(i=10;i>=1;i--)
cout<<i<<endl;
}
};
int main ()
{
reverse ob;
cout<<"Reverse\n";
ob.print();
return 0;
}