#include<iostream>
using namespace std;
int main()
{
string s;
int n,i;

cin>>s;
for(i=0;i<=s.size();i++)
{
s[i]+=2;
}
for(i=s.size();i>=0;i--)
{
cout<<s[i];
}
return 0;
}
