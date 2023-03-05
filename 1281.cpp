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
    int t,n,i,j;
    cin>>t;
    while(t--) {
        cin>>n;
        string x;
        double y;
        double total=0.0;
        map<string,double>mp;
        for(i=0; i<n; i++) {
            cin>>x>>y;
            mp[x]=y;
        }
        cin>>n;
        for(i=0; i<n; i++) {
            cin>>x>>y;
            if(mp.find(x)!=mp.end())
                total+=mp[x]*y;
        }
        printf("R$ %.2lf\n",total);
        mp.clear();
    }
    return 0;
}
