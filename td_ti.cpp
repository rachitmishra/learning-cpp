#include<iostream>

using namespace std;
typedef int I;
int main ()
{
I x,y;
double z;
if (typeid(x)==typeid(y))
cout<<"X and Y are of Same types."<<endl;
cout<<"Type of Z is : "<<typeid(z).name;
return 0;
}