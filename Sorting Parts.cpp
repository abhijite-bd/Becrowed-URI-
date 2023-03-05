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
    ll t,n,i,j,k;
    cin>>t;
    while(t--) {
        cin>>n;
        vector<ll>v1,v2;
        for(i=0; i<n; i++) {
            int x;
            cin>>x;
            v1.pb(x);
            v2.pb(x);
        }
        sort(v1.begin(),v1.end());
        if(v1==v2)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
