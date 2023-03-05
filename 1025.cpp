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
    int n,q,i,ans;
    int t=0;
    while(++t) {
        cin>>n>>q;
        if(n==0 and q==0)
            return 0;
        map<int, int>mp;
        int a[n],b[q];
        for(i=0; i<n; i++) {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0; i<n; i++) {
            if(mp.find(a[i])==mp.end())
                mp[a[i]]=i;
        }
        cout<<"CASE# "<<t<<':'<<endl;
        for(i=0; i<q; i++) {
            cin>>b[i];
            if(mp.find(b[i])==mp.end())
                cout<<b[i]<<" not found\n";
            else
                cout<<b[i]<<" found at "<<mp[b[i]]+1<<endl;
        }
        mp.clear();

    }
    return 0;
}
