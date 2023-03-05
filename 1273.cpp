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
    int n,i,j,flag=0;
    while(cin>>n and n!=0) {
        vector<string>v;
        int mx=0;
        string s;
        for(i=0; i<n; i++) {
            cin>>s;
            v.pb(s);
            if(s.size()>mx)
                mx=s.size();
        }
        if(flag)
            cout<<endl;
        for(i=0; i<n; i++) {
            for(j=v[i].size(); j<mx; j++) {
                cout<<" ";
            }
            cout<<v[i]<<endl;
        }
        flag=1;
    }
    return 0;
}
