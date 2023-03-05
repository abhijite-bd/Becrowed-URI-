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
    int n,i,x;
    char y;
    while(cin>>n) {
        map<int,pair<int,int>>m;
        int   ans=0;
        for(i=0; i<n; i++) {
            cin>>x>>y;
            if(y=='D')
                m[x].first++;
            else
                m[x].second++;
        }
        for(auto e:m) {
            ans+=min(e.second.first,e.second.second);
        }
        cout<<ans<<endl;
        m.clear();
    }
    return 0;
}
