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
    int n,m,i,k,t,w,a,h;
    string s;
    cin>>t;
    for(k=1; k<=t; k++) {

        cin>>n>>m;
        map<string,vector<double>>mp;
        for(i=0; i<n; i++) {
            cin>>s>>w>>a>>h;
            mp[s].pb(w);
            mp[s].pb(a);
            mp[s].pb(h);
        }
        printf("CENARIO {%d}\n",k);
        i=1;
//        sort(mp.begin(),mp.end());
        for(auto it:mp) {
            printf("%d - %s\n",i,it.first);
            i++;
        }
    }
    return 0;
}
