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
    ll t,i,ans,a,b,n,c;
    cin>>t;
    while(t--) {
        cin>>n>>b;
        ans=0;
        multiset<ll> s;
        for(i=0; i<n; i++) {
            cin>>a;
            s.insert(a);
        }
//        auto it=s.end();
//        it--;
//        cout<<*it<<endl;
        for(i=0; i<b; i++) {
            auto it=(--s.end());
            c=*it;
            ans+=c;
            s.erase(it);
            s.insert(c/2);
        }
        cout<<ans<<endl;
    }
    return 0;
}
