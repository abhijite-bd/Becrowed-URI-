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
    int j,r,x,i,mx=0,ans=0,k;

    cin>>j>>r;
    vector<int>v(j,0);
    for(i=0; i<r; i++) {
        for(k=0; k<j; k++) {
            cin>>x;
            v[k]+=x;
            if(v[k]>=mx){
                mx=v[k];
                ans=k;
            }
        }
    }
    cout<<ans+1<<endl;
    return 0;
}
