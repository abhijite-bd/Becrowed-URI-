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
ll c=0;
ll fibo (ll n)
{
    c++;
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}

int main()
{
    ll t,n,i;
    scanf("%lld",&t);
    while(t--) {
        scanf("%lld",&n);
        c=0;
        printf("fib(%lld) = %lld calls = %lld\n",n,c-1,fibo(n));
    }
    return 0;
}
