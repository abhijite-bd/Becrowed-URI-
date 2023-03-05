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
int t,i,n;
cin>>t;
while(t--){
string s;
cin>>s;
n=s.size();
if(s[0]!='R' or s[1]!='A' or n!=20)
    cout<<"INVALID DATA"<<endl;
else
{
    string s2=s.substr(2,18);
    cout<<stoll(s2,nullptr,10)<<endl;
}
}
return 0;
}
