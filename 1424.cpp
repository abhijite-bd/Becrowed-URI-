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
    int n,m,k,i,v,x;
    while(cin>>n>>m) {
        map<int,vector<int>>mp;
        for(i=0; i<n; i++) {
            cin>>x;
            mp[x].pb(i);
        }

        for(i=0; i<m; i++) {
            cin>>k>>v;
            if(mp[v].size()<k)
                cout<<0<<endl;
            else
                cout<<mp[v][k-1]+1<<endl;
        }
        mp.clear();
    }
    return 0;
}
