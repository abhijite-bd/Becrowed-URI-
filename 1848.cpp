//wrong 30%
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
    int ans,n=3;
    string s;
    while(n--) {
        ans=0;
        while(1) {
            fflush(stdin);
            cin>>s;
            if(s[0]=='c') {
                break;
            } else if(s[0]=='-')
                ans+=1;
            else
                ans+=4;
        }
        cout<<ans<<endl;
    }
    return 0;
}
