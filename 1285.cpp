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
int ans(int n)
{
    vector<int>v;
    while(n!=0) {
        int r=n%10;
        if(find(v.begin(),v.end(),r)!=v.end())
            return 0;
        else
            v.pb(r);
        n/=10;
    }
    return 1;
}
int main()
{
    int i,n,m,j;
    const int x=5005;
    vector<int>v(x,0);
    for(i=1; i<5005; i++) {
        v[i]=v[i-1] +ans(i);
    }
    while(cin>>n>>m) {
        cout<<v[m]-v[n-1]<<endl;
    }
    return 0;
}
