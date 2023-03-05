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
        ll a[n],zero=0,ans1,ans=0;
        for(i=0; i<n; i++) {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0; i<n; i++) {
            zero=0,ans1=0;
            for(j=i; j<n; j++) {
                if(a[j]!=0)
                    zero++;
                ans1+=(a[j]-a[i]+1);
//                ans1+=zero;
            }
            ans+=ans1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
