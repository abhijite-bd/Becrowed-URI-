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
ll factorial(ll n)
{
    if(n==1)
        return 1;
    else if(n==0)
        return 1;
    else
        return n*factorial(n-1);

}
int main()
{
    ll a,b,ans;
    while(cin>>a>>b) {
        cout<<factorial(a)+factorial(b)<<endl;
    }
    return 0;
}
