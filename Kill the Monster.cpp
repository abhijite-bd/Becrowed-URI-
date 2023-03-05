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
    ll t,hc,dc,hm,dm,k,w,a,i;
    cin>>t;
    while(t--) {
        int flag=0;

        cin>>hc>>dc;
        cin>>hm>>dm;
        cin>>k>>w>>a;



        for(i=0; i<=k; i++) {
            ll nh=hc+i*a;
            ll nd=dc+(k-i)*w;
            ll fst=(hm+nd-1)/nd;
            ll scnd=(nh+dm-1)/dm;
            if(fst<=scnd) {
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
