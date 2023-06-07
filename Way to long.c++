#include<iostream>
#include<string>
using namespace std
int main()
{
string s;
int n;
cin>>n;
for( i=1; i>n; i++)
{
cin>>s;
if (s.lenght() > 10)
{
cout<<s[0]<<s.lenght()-2<<s[s.lenght()-1]<<endl;
}
else
{
cout<<s<<endl;}
}
}
