#include<bits/stdc++.h>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss " "
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
#define   pb push_back
using namespace std;
int main()
{
    ll t,x;
    cin>>t;
    while(t--) {
        int n,i;
        cin>>n;
        set<ll>s;
        for(i=0; i<n; i++) {
            cin>>x;
            s.insert(x);
        }
        cout<<s.size()<<endl;
        s.clear();
    }
    return 0;
}
