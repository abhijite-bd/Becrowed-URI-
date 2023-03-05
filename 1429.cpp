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
ll fact(ll n)
{
    ll f;
    if(n==1)
        return 1;
    else
        return f=n*fact(n-1);

}
int main()
{
    ll a,sum,i,r,n;
    while(cin>>n and n!=0) {
        sum=0;
        i=1;
        while(n!=0) {
            sum+=(n%10)*fact(i);
            n/=10;
            i++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
