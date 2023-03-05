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
    int t,n,i,j,c;
    cin>>t;
    while(t--) {
        int c=0;
        cin>>n;
        ll a[n],b[n];
        for(i=0; i<n; i++) {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a,a+n,greater<int>());
        for(i=0; i<n; i++) {
            if(a[i]==b[i])
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
