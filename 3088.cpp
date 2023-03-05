#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
#include<array>
#include<vector>
#include<queue>
#include<set>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss " "
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
using namespace std;
int main()
{
string s;
int t,i,n;
while(getline(cin,s))
{
    n=s.size();
    for(i=0;i<n;i++)
    {
    if(s[i]==' ' and (s[i+1]==',' or s[i+1]=='.'))
    {
        continue;
    }
    else
        cout<<s[i];
    }
    cout<<endl;
}
return 0;
}
