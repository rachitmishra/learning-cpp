#include<iostream>

using namespace std;
class even
{
public:
int num,eve;
void print()
{
for(num=1;num<=100;num++)
{
if(num%2==0)
cout<<num<<endl;
}
}
};


int main()
{
even ob;
cout<<endl;
ob.print();
return 0;
}