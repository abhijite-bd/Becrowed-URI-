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
    int t,n,i;
    string s,ans;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>s;
        n=s.size();
        if(n!=3)
            ans=s;
        else {
            if(s[0]=='O' and s[1]=='B')
                ans="OBI";

            else  if(s[0]=='U' and s[1]=='R')
                ans="URI";
            else
                ans=s;
        }
        cout<<ans<<(i+1==t?"\n":ss);
    }
    return 0;
}
