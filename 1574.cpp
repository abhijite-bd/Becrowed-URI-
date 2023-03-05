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
    int n,i,a,t,j;
    cin>>t;
    string s;
    while(t--) {
        cin>>n;
        vector<int>v;
        int ans=0;
        cin.ignore();
        for(i=0; i<n; i++) {
            getline(cin,s);
            int l=s.size();
            if(s=="LEFT") {
                v.pb(-1);
            } else if(s=="RIGHT") {
                v.pb(1);
            } else {
               string sub = s.substr(8);
//               cout<<sub<<endl;
                int x = stoi( sub );
                v.pb(v[x-1]);
            }
        }
        for(auto e:v)
            ans+=e;
        cout<<ans<<endl;
        v.clear();
    }
    return 0;
}
