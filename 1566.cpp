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
int a[3000000]= {0};
int main()
{
    ll t,i,n,x,j;
    cin>>t;
    while(t--) {
        cin>>n;
        for(i=0; i<n; i++) {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0; i<n-1; i++) {
            cout<<a[i]<<ss;
        }
        cout<<a[n-1]<<endl;
    }
    return 0;
}
