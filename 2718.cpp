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
    int t;
    cin>>t;
    ll n;
    while(t--) {
        cin>>n;
        ll maxx=0;
        ll count=0;
        ll temp;
        while(n>0) {
            temp=n%2;
            n/=2;
            if(temp==1)count++;
            else {
                if(count>maxx) {
                    maxx=count;
                    count=0;
                }
                count=0;
            }
        }
        if(count>maxx) {
            maxx=count;
            count=0;
        }
        cout<<maxx<<endl;
    }
    return 0;
}
