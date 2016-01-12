#include<iostream>
#include<string>

using namespace std;

int main()
{

string S;
if(S.empty())
cout<< " S is Empty "<<endl;

string str1 = " Rachit Mishra ";
string str2 (6,'B');
string str3 (str1);
string str4 (str1, 7, 6);
string str5 (str1.begin()+7,str1.end());
string str6 (" Rachit Mishra",8);

cout<<str1<<endl;
cout<<str2<<endl;
cout<<str3<<endl;
cout<<str4<<endl;
cout<<str5<<endl;
cout<<str6;
return 0;
}


