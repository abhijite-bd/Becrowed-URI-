
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
    cin>>n;
    ll a[n];
    for(i=0; i<n; i++) {
        cin>>a[i];
    }
    int b=a[0];
    sort(a,a+n);
    if(b==a[n-1])
        cout<<"S"<<endl;
    else
        cout<<"N"<<endl;
    return 0;
}
