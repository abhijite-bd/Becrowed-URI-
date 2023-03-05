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
    ll t,ans,n,i,j;
    while(cin>>n and n!=0) {
        map<ll,ll>m;
        for(i=0; i<n; i++) {
            cin>>j;
            m[j]++;
        }
        for(auto it:m)
            if(it.second%2==1) {
                cout<<it.first<<endl;
            }
        m.clear();
    }
    return 0;
}
