#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
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
    int a,ans=0,p=0;
    while(cin>>s and s[0]!='A') {
        cin>>a;
        if(s[0]=='S') {
            ans+=a;
            p++;
        }

        if(s[0]=='V') {
            ans-=a;
            p--;
        }
    }
    cout<<ans<<endl;
    cout<<p<<endl;
    return 0;
}
